// bubble.cpp : Defines the entry point for the console application.
//
/*********************************/
/*     name: gao xiangyuan       */
/*     file; 17107012HW06-21     */
/*********************************/
#include"stdafx.h"
#define SIZE 10
void bubblesort(int a[], int size);
void printPass(int a[], int size);
int main()
{
	int a[10];
	int i;
	printf("Input %d integer value: ", SIZE);
	for (i = 0; i < SIZE; i++)
		scanf_s("%d", &a[i]);
	printf("[step %2d] : ", 0);
	for (i = 0; i < SIZE; i++)
		printf("%4d", a[i]);
	printf("\n");
	bubblesort(a, SIZE);
	printf("\n");
	return 0;
}
void bubblesort(int a[], int size)
{
	int i, j, temp, flag;
	int k = 1;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1 - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
				flag = 1;
			}
		} // end for
		if (flag == 1)
		{
			printf("[step %2d] : ", k);
			printPass(a, size);
			flag = 0;
			k++;
		}
		else
			break;
	 } //end for

}
void printPass(int a[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%4d", a[i]);
	printf("\n");
}