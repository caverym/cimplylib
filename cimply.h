//
// Created by avery on 17/01/2021.
//

#ifndef CIMPLEFETCH_CIMPLY_H
#define CIMPLEFETCH_CIMPLY_H
#define CIMPLY_VERSION 0.2


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

// Init basic user information into INFO
extern int cimple_init(struct cimply *_info);

// Give INFO HOME and SHELL
extern int cimply_init_name(struct cimply *_info);


// Proton Caller
// https://github.com/caverym/Proton-Caller

struct runner {
    char *version;
    char *path;
    char *program;
    char *common;
    char *arguments;
    _Bool custom;

};

// saves ARG to respective location in STR
extern int set_runner_version(struct runner *str, char *arg);
extern int set_runner_path(struct runner *str, char *arg);
extern int set_runner_program(struct runner *str, char *arg);
extern int set_runner_common(struct runner *str, char *arg);
extern int set_runner_arguments(struct runner *str, char *arg);
extern int set_runner_custom(struct runner *str, int i);
#endif				//CIMPLEFETCH_CIMPLY_H
