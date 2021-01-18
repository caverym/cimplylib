//
// Created by avery on 17/01/2021.
//

#ifndef CIMPLEFETCH_CIMPLY_H
#define CIMPLEFETCH_CIMPLY_H
#include <stdlib.h>

struct cimply {
	const char *name;
	const char *home;
	const char *shell;
	const char *desktop;
	const char *pwd;
};

int cimple(struct cimply *_info);

#endif				//CIMPLEFETCH_CIMPLY_H
