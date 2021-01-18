//
// Created by avery on 18/01/2021.
//

#include <stdio.h>
#include <stdlib.h>
#include "../cimply.h"
#define ENV
struct cimply info;

int main()
{
	cimple(&info);
	cimple_supply(&info, getenv("HOME"), getenv("SHELL"));

	printf("Name:     %s\n", info.name);
	printf("Home:     %s\n", info.home);
	printf("Shell:    %s\n", info.shell);
	// printf("desktop:  %s\n", info.desktop);
	printf("PWD:      %s\n", info.pwd);
	printf("Hostname: %s\n", info.hostname);
	printf("UID:      %u\n", info.uid);
	printf("EUID:     %u\n", info.euid);

	return 0;
}
