// for_break.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
int main()
{
	int i, j;
	for (i = 0; i <= 10; i++) {
		if (i % 2 == 0)
			printf(" ");
		for (j = 0; j <= 5; j++) {
			printf("* ");
		}
		if (i % 2)
			printf(" ");
		printf("\n");
	}
	return 0;
}

