// multiple.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "math.h"

int main()
{
	int a, b;

	printf("Enter two numbers: ");
	scanf_s("%d%d", &a, &b);
	
	printf("|%d| + |%d| = %d\n", a, b, sum(abs(a), abs(b)) );

    return 0;
}
