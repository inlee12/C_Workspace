// array2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>
#define SIZE 7
int main()
{
	int i, k, a[SIZE] = { 0 };
	
	
	for (i = 0; i < 6000; i++) {
		k = 1 + rand() % 6;
		a[k]++;
	}
	printf("frequency : \n");
	for (i = 1; i < SIZE; i++)
		printf("%d :  %4d\n", i, a[i]);

    return 0;
}
