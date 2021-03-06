// bubble_sort.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>
#define SIZE 10
void bubble_sort(int a[]);

int main()
{
	int i, a[SIZE];

	for (i = 0; i < SIZE; i++)
		a[i] = rand() % 101; // 0 ~ 100

	printf("unsorted array A\n    ");
	for (i = 0; i < SIZE; i++)
		printf("%4d", a[i]);

	printf("\nsorted array A\n");
	bubble_sort(a); // call function


    return 0;
}

void bubble_sort(int a[]) {
	int i, j, k, hold, flag=0, round=0;

	for (i = 0; i < SIZE; i++) {
		for (j = 0; j < SIZE - 1 - i; j++) {
			if (a[j] > a[j + 1]) {
				hold = a[j];
				a[j] = a[j + 1];
				a[j + 1] = hold;
				flag = 1;
			}// end if
		 } // end for
		if (flag == 1) {
			flag = 0;
			printf("\n%-4d", round++);
			for (k = 0; k < SIZE; k++)
				printf("%4d", a[k]);
			printf("\n");
		}
		else
			break;

	} // end for

}// end


