// test1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string.h>

int main()
{
	char *s[10]; int i, k;

	for (i = 0; i < 10; i++)
		gets_s(s[i]);

	for (i = 0; i < 10; i++)
		puts(s[i]);

	
    return 0;
}

