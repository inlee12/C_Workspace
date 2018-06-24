// strcat.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string.h>
int main() {
	char a[100], b[100]; int len_a, len_b;
	
	scanf_s("%s%s", a, b);  //a b
	len_a = strlen(a);
	len_b = strlen(b);
	printf("a_len = %d  b_len = %d", len_a, len_b);

	if (strncmp(a, b, 2) == 0)
		printf("a == b\n");
	else if (strncmp(a, b, 2) > 0)
		printf("a > b\n");
	else
		printf("a < b\n");

	strcat(b, strlen(a)+1, a); //from a to b
	puts(b);

    return 0;
}

