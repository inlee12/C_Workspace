// scanf_s.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string.h>

int main()
{
	char a[100], b[100]; int i;

	printf("Enter string :");
	gets_s(a);
	printf("Enter string :");
	gets_s(b);

	if (strcmp(a, b) == 0)
		printf("0\n");
	else if (strcmp(a, b) > 0)
		printf("1\n");
	else 
		printf("-1\n");
    return 0;
}

