// pointer2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main()
{
	char *p[] = { "Lee In Sook", "choi ji min", "Telecom", "cecom" };
	int i;

	for (i = 0; i < 4; i++)
		printf("%s\n", p[i]);


	return 0;
}

