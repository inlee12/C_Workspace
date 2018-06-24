// strcmp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string.h>
int main() {
	char a[100], b[100];

	scanf_s("%s%s", a, 100, b, 100);  //a b
	printf("length of a = %d\nlength of b = %d\n", strlen(a), strlen(b));

	if (strcmp(a, b) == 0)
		printf("a == b\n");
	else if (strcmp(a, b) > 0)
		printf("a > b\n");
	else
		printf("a < b\n");

	strcat_s(a, b);
	puts(a);
	puts(b);

	return 0;
}


