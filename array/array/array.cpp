// array.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#define SIZE 100

int main(){
	char a[SIZE]; int i,j;

	printf("Enter message : ");
	gets_s(a);

	printf("in reverse : ");
	for (i = 0; i < SIZE; i++)
		if (a[i] == '\0')
			break;
	for (j = i - 1; j >= 0; j--)
		putchar(a[j]);
	printf("\n");
    return 0;
}

