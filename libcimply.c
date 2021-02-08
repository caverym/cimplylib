//
// Created by avery on 17/01/2021.
//
#include "libcimply.h"

// Cimplefetch

extern void *stupid_return(void)
{
	return NULL;
}

extern int cimple(struct cimply *_info)
{
	_info->cwd = getcwd(stupid_return(), 4096);
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

extern int cimple_cwd(struct cimply *_info)
{
	_info->cwd = getcwd(stupid_return(), 4096);

	if (_info->cwd == NULL)
		return -1;
	return 0;

}

extern int cimple_pwd(struct cimply *_info)
{
	_info->cwd = getcwd(stupid_return(), 4096);

	if (_info->cwd == NULL)
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

	if (_info->hostname[0] == '\0')
		return -1;
	return 0;
}


// Proton Caller

extern int set_runner_version(struct runner *str, char *arg)
{
	str->version = arg;

	if (str->version == NULL)
		return -1;
	return 0;
}

extern int set_runner_path(struct runner *str, char *arg)
{
	str->path = arg;

	if (str->path == NULL)
		return -1;
	return 0;
}

extern int set_runner_program(struct runner *str, char *arg)
{
	str->program = arg;

	if (str->program == NULL)
		return -1;
	return 0;
}

extern int set_runner_common(struct runner *str, char *arg)
{
	str->common = arg;

	if (str->common == NULL)
		return -1;
	return 0;
}

extern int set_runner_arguments(int place, struct runner *str, char *arg)
{
	str->arguments[place] = arg;

	if (str->arguments[place] == NULL)
		return -1;
	return 0;
}

extern int set_runner_custom(struct runner *str, bool i)
{
	str->custom = i;
	return 0;
}
