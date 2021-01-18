//
// Created by avery on 17/01/2021.
//
#include "cimply.h"
#include <unistd.h>


// Cimplefetch

extern void *stupid_return(void)
{
	return NULL;
}

extern int cimple_init(struct cimply *_info) {
	_info->pwd = getcwd(stupid_return(), 4096);
	_info->uid = getuid();
	_info->euid = geteuid();
	_info->name = getlogin();
	_info->hostname[1023] = '\0';
	gethostname(_info->hostname, 1023);

	return 0;
}


// Proton Caller

extern int set_runner_version(struct runner *str, char *arg) {
	str->version = arg;
	return 0;
}

extern int set_runner_path(struct runner *str, char *arg) {
	str->path = arg;
	return 0;
}

extern int set_runner_program(struct runner *str, char *arg) {
	str->program = arg;
	return 0;
}

extern int set_runner_common(struct runner *str, char *arg) {
	str->common = arg;
	return 0;
}

extern int set_runner_arguments(struct runner *str, char *arg) {
	str->arguments = arg;
	return 0;
}

extern int set_runner_custom(struct runner *str, int i) {
	str->custom = i;
	return 0;
}