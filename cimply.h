//
// Created by avery on 17/01/2021.
//

#ifndef CIMPLEFETCH_CIMPLY_H
#define CIMPLEFETCH_CIMPLY_H


// Cimplefetch

struct cimply {
	const char *name;
	const char *home;
	const char *shell;
	// const char *desktop;
	const char *pwd;
	char hostname[1024];
	unsigned int uid;
	unsigned int euid;

};

extern int cimple(struct cimply *_info) __THROW;
// To give Cimply extra user information you may want to print.
extern int cimple_supply(struct cimply *_info, const char *home, const char *shell) __THROW;


// Proton Caller

struct runner {
    const char *version;
    const char *path;
    const char *program;
    const char *common;
    const char *arguments;
    _Bool custom;

};

extern int set_runner_version(struct runner *str, const char *arg) __THROW;
extern int set_runner_path(struct runner *str, const char *arg) __THROW;
extern int set_program(struct runner *str, const char *arg) __THROW;
extern int set_common(struct runner *str, const char *arg) __THROW;
extern int set_arguments(struct runner *str, const char *arg) __THROW;
extern int set_custom(struct runner *str, int i) __THROW;

#endif				//CIMPLEFETCH_CIMPLY_H
