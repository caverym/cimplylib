//
// Created by avery on 17/01/2021.
//

#ifndef CIMPLEFETCH_CIMPLY_H
#define CIMPLEFETCH_CIMPLY_H
#define CIMPLY_VERSION 0.4
#include <stdbool.h>

// Cimplefetch
// https://github.com/caverym/cimplefetch

struct cimply {
	char *name;
	char *home;
	char *pwd;
	char hostname[1024];
	unsigned int uid;
	unsigned int euid;

};

// saves given to respective location in INFO
extern int cimple_init(struct cimply *_info);

// fill in specific variable in INFO
extern int cimple_name(struct cimply *_info);

extern int cimple_pwd(struct cimply *_info);

extern int cimple_uid(struct cimply *_info);

extern int cimple_euid(struct cimply *_info);

extern int cimple_hostname(struct cimply *_info);


// Proton Caller
// https://github.com/caverym/Proton-Caller

struct runner {
    char *version;
    char *path;
    char *program;
    char *common;
    char *arguments;
    bool custom;

    char *ar1;
    char *ar2;
    char *ar3;

};

// saves ARG to respective location in STR
extern int set_runner_version(struct runner *str, char *arg);
extern int set_runner_path(struct runner *str, char *arg);
extern int set_runner_program(struct runner *str, char *arg);
extern int set_runner_common(struct runner *str, char *arg);
extern int set_runner_arguments(struct runner *str, char *arg);
extern int set_runner_custom(struct runner *str, int i);

extern int set_ar1(struct runner *str, char *arg);
extern int set_ar2(struct runner *str, char *arg);
extern int set_ar3(struct runner *str, char *arg);
#endif				//CIMPLEFETCH_CIMPLY_H
