//
// Created by avery on 18/01/2021.
//

#include <unistd.h>
#include <stdio.h>
#include <libcimply.h>

struct cimply user;

int main()
{
	cimple_init(&user);

	printf("Name:     %s\n", user.name);
	printf("PWD:      %s\n", user.pwd);
	printf("Hostname: %s\n", user.hostname);
	printf("UID:      %u\n", user.uid);
	printf("EUID:     %u\n", user.euid);

	return 0;
}
