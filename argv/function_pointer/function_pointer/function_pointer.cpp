// function_pointer.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>
#define SIZE 10

int compare(const void *a, const void *b) {
	return (*(int*)a - *(int*)b);
}
int main()
{
	int a[SIZE], i;

	printf("Enter number : ");
	for (i = 0; i < SIZE; i++)
		scanf_s("%d", a + i);

	qsort(a, SIZE, sizeof(int), compare);
	printf("Sorted number : ");
	for (i = 0; i < SIZE; i++)
		printf("%4d", a[i]);

    return 0;
}

