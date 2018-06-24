// pointer_array.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
void ascending_sort(int **a, int size);
int main()
{
	int a[5];
	int*p[5];
	int i;

	printf("Enter 5 integers : ");
	for (i = 0; i < 5; i++)
		scanf_s("%d", a+i);

	for (i = 0; i < 5; i++)
		p[i] = a+i;

	ascending_sort(p, 5);
	printf("ascending datas : ");
	for (i = 0; i < 5; i++)
		printf("%4d", *p[i]);


    return 0;
}
void ascending_sort(int **a, int size) {
	int i, j, k, *temp;

	for (i = 0; i < size; i++) {
		for (j = 0; j < size - 1; j++) {
			if (*a[j] > *a[j + 1]) {
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
		for (k = 0; k < size; k++)
			printf("%4d", *a[k]);
		printf("\n");
	 }

}
