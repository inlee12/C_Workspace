// hands.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>
#define SIZE 10

int main(void)
{
		int  grade;

		printf("Enter grade : ");
		scanf_s("%d", &grade);

		if (grade >= 60)
			printf("passed\n");

		printf("end !\n");

		return 0;
}

