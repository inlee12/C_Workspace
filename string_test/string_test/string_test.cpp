// string_test.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string.h>
#define SIZE 100

int main() {
	char a[SIZE], b[SIZE]; 

	printf("Enter a string A: ");
	gets_s(a);
	printf("Enter a string B: ");
	gets_s(b);
	strcat_s(a, b);
	puts(a);
	

    return 0;
}

//fgets(a, sizeof(a)/sizeof(char), stdin);



//	fgets(b, SIZE, stdin);
// puts(b);
//fputs(b, stdout);
