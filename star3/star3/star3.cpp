// star3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void reverse(int n); 
int main()
{ 
	int i, num;

	printf("enter num :");
	scanf_s("%d", &num);
	reverse(num);

    return 0;
}

void reverse(int n) {
	int k;
	if (n == 0)
		;
	else {
		k = n % 10;
		printf("%1d", k);
		reverse(n / 10);
	}

}
