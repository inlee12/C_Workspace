// rand.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void reverse(int n) {
	if (n <= 0)
		return;
	else {
		printf("%1d", n % 10);
		reverse(n / 10);
	}
}

int main(){
	int num;
	
	printf("Enter number :");  // 123
	scanf_s("%d", &num);
	reverse(num);  // 321
	printf("\n");
	
    return 0;
}

