// array_function.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <stdlib.h>

void print_grade(int b[]);

int main() {
	int a[10][4] = { 0 }; int i, j;

	for (i = 0; i < 10; i++)
		for (j = 0; j < 4; j++)
			a[i][j] = rand() % 101;

	for (i = 0; i < 10; i++)
	     print_grade(a[i]); 

    return 0;
}

void print_grade(int b[]) {
	int j;

	for (j = 0; j < 4; j++)
		printf("%4d", b[j]);

	printf("\n");

}