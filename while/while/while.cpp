// while.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(void) {
	int num, grade;
	int total;

	num = 1;
	total = 0;
	while (num <= 10) {
		printf("Enter grade %d : ", num);
		scanf_s("%d", &grade);
		total = total + grade;
		++num;
	}

	printf("average = %7.2f\n", float(total) / 10);

	return 0;
}