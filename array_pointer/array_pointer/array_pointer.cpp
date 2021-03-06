// array_pointer.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>
#define ROW 3
#define COL 5
void print_array(int (*q)[COL], int row, int col);

int main()
{
	int a[ROW][COL], i, j, (*p)[COL];

	for (i = 0; i < ROW; i++)
		for (j = 0; j < COL; j++)
			a[i][j] = rand() % 6;
	printf("array A\n");
	print_array(a, ROW, COL);

	for (p = a; p < a + ROW; p++)
		(*p)[3] = 0;
	printf("modified array A\n");
	print_array(a, ROW, COL);

    return 0;
}

void print_array(int (*q)[COL], int row, int col) {
	int i, j;

	for (i = 0; i < ROW; i++, q++) {
		for (j = 0; j < COL; j++)
			printf("%3d", (*q)[j]);
		printf("\n");
	}

}