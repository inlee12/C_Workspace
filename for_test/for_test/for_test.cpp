// for_test.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	float a0, a1, a2;
	int i, num;

	printf("Enter number : ");
	scanf_s("%d", &num);

	a0 = 1;
	a1 = 1;
	for (i = 2; i <= num; i++) {
		a2 = (2 * a0) / (a1 + 2);
		a0 = a1;
		a1 = a2;
	}
		
	printf("a%d = %10.4f\n", num, a2);


    return 0;
}

