// string_string.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string.h>

int main()
{
	char a[100], b[100];

	printf("enter message :");
	gets_s(a);

	strcpy_s(b, a); // from a to b

	printf("b :\n");
	puts(b);
	printf("%d char\n", strlen(b));

	strcat_s(a, b); // a b
	puts(a);

    return 0;
}


