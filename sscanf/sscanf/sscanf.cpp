// sscanf.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string.h>
int main()
{
	char a[100], b[100];
	int i;
	float y;

	scanf_s("%s%s", a, 100, b, 100);
	if (strcmp(a, b) == 0)
		printf("a == b\n");
	else if (strcmp(a, b) < 0)
		printf("a < b\n");
	else
		printf("a > b\n");
	return 0;
}

