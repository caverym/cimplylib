//
// Created by avery on 17/01/2021.
//

#ifndef CIMPLEFETCH_CIMPLY_H
#define CIMPLEFETCH_CIMPLY_H
#define CIMPLY_VERSION "0.5"
#include <stdbool.h>
#include <unistd.h>

// Cimplefetch
// https://github.com/caverym/cimplefetch

struct cimply {
	char *name;
	char *home;
	char *cwd;
	char hostname[1024];
	unsigned int uid;
	unsigned int euid;
};

/*  fills INFO will all available information.
    This does not check for errors; always 
    returns 0. */
extern int cimple(struct cimply *_info);
/* save username in INFO */
extern int cimple_name(struct cimply *_info);
/* save current working directory to INFO */
extern int cimple_cwd(struct cimply *_info);
/* save current working directory to INFO */
extern int cimple_pwd(struct cimply *_info) 
__attribute_deprecated_msg__("use `cimple_cwd()`");
/* save user ID to INFO. Does not check if successful */
extern int cimple_uid(struct cimply *_info);
/* save effective user ID to INFO. Does not check if successful */
extern int cimple_euid(struct cimply *_info);
/* save hostname to INFO */
extern int cimple_hostname(struct cimply *_info);


// Proton Caller
// https://github.com/caverym/Proton-Caller

struct runner {
    char *version;
    char *path;
    char *program;
    char *common;
    char *arguments[8];
    bool custom;
};

/* set version in STR */
extern int set_runner_version(struct runner *str, char *arg);
/* set path in STR */
extern int set_runner_path(struct runner *str, char *arg);
/* set program in STR */
extern int set_runner_program(struct runner *str, char *arg);
/* set common in STR */
extern int set_runner_common(struct runner *str, char *arg);
/* set arguments in STR. This uses `char *[]` array, use PLACE for location */
extern int set_runner_arguments(int place, struct runner *str, char *arg);
/* set custom in STR. Boolean */
extern int set_runner_custom(struct runner *str, bool i);

#endif				//CIMPLEFETCH_CIMPLY_H
