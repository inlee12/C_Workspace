// HW04-2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
		int a0, a1, a2, i, num;

		printf("Enter a number :  ");
		scanf_s("%d", &num);

		a0 = 1;
		a1 = 1;
		for (i = 2; i <= num; i++)
		{
			a2 = (2 * an0) / (an1 + 2);
			a0 = a1;
			a1 = a2;
		}
		printf("a%-d = %d\n", num, a2);

		return 0;

   
}
