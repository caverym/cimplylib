//
// Created by avery on 17/01/2021.
//
#include "cimply.h"

int cimple(struct cimply *_info)
{
	_info->name = getenv("USER");
	_info->home = getenv("HOME");
	_info->shell = getenv("SHELL");
	_info->pwd = getenv("PWD");
	_info->desktop = getenv("XDG_SESSION_DESKTOP");

	return 0;
}
