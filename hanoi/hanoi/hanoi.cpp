// hanoi.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void hanoi(int n, char a, char b, char c)
{
	if (n > 0) {
		hanoi(n - 1, a, c, b);
		printf("%c -> %c\n", a, c);
		hanoi(n - 1, b, a, c);
	}
}

void main() {
	int number;

	printf("Enter number of disks : ");
	scanf_s("%d", &number);
	hanoi(number, 'A', 'B', 'C');
}
