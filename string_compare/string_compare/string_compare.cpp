// string_compare.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string.h>

int main()
{
	char a[100], s[100];
	int i, cnt, length, k=0;

	printf("[INPUT]\n");
	scanf_s("%d%s", &cnt, s, 100);
	length = strlen(s);
	for (i = 0; i < cnt; i++) {
		scanf_s("%s", a, 100);
		if (strncmp(a, s, length) == 0)
			k++;
	}
	printf("\n[OUTPUT]\n%d\n", k);
    return 0;
}

