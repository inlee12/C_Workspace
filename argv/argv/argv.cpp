// argv.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main(int argc, char *argv[])
{
	int i;
	
	for (i = 0; i < argc; i++)
		printf("argv[%d] = %s\n", i, argv[i]);

    return 0;
}

