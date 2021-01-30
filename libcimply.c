//
// Created by avery on 17/01/2021.
//
#include "libcimply.h"
#include <unistd.h>



// Cimplefetch

extern void *stupid_return(void)
{
	return NULL;
}

extern int cimple_init(struct cimply *_info)
{
	_info->pwd = getcwd(stupid_return(), 4096);
	_info->uid = getuid();
	_info->euid = geteuid();
	_info->name = getlogin();
	_info->hostname[1023] = '\0';
	gethostname(_info->hostname, 1023);

	return 0;
}

extern int cimple_name(struct cimply *_info)
{
	_info->name = getlogin();

	if (_info->name == NULL)
		return -1;
	return 0;
}

extern int cimple_pwd(struct cimply *_info)
{
	_info->pwd = getcwd(stupid_return(), 4096);

	if (_info->pwd == NULL)
		return -1;
	return 0;

}

extern int cimple_uid(struct cimply *_info)
{
	_info->uid = getuid();
	return 0;
}

extern int cimple_euid(struct cimply *_info)
{
	_info->euid = geteuid();
	return 0;
}

extern int cimple_hostname(struct cimply *_info)
{
	_info->hostname[1023] = '\0';
	gethostname(_info->hostname, 1023);

	if (_info->hostname[1] == '\0')
		return -1;
	return 0;
}

// Proton Caller

extern int set_runner_version(struct runner *str, char *arg)
{
	str->version = arg;
	return 0;
}

extern int set_runner_path(struct runner *str, char *arg)
{
	str->path = arg;
	return 0;
}

extern int set_runner_program(struct runner *str, char *arg)
{
	str->program = arg;
	return 0;
}

extern int set_runner_common(struct runner *str, char *arg)
{
	str->common = arg;
	return 0;
}

extern int set_runner_arguments(struct runner *str, char *arg)
{
	str->arguments = arg;
	return 0;
}

extern int set_runner_custom(struct runner *str, int i)
{
	str->custom = i;
	return 0;
}

extern int set_ar1(struct runner *str, char *arg)
{
	str->ar1 = arg;
	return 0;
}

extern int set_ar2(struct runner *str, char *arg)
{
	str->ar2 = arg;
	return 0;
}

extern int set_ar3(struct runner *str, char *arg)
{
	str->ar3 = arg;
	return 0;
}
