// grade.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int add(int k);  // function prototype
int factorial(int n); 

int main() {
	int n;
	printf("Enter number : ");
	scanf_s("%d", &n);

	printf("sum = %d\n", add(n) );  // function call
	printf("%d ! = %d\n", n, factorial(n));

	return 0;
}

int add(int k) {   // function definition
	int i, tot;
	tot = 0;
	for (i = 1; i <= k; i++)
		tot = tot + i;

	return tot;
}
int factorial(int n) {
	int i, fac;

	fac = 1;
	for (i = 1; i <= n; i++)
		fac = fac * i;
	return fac;
}


