// forbreak.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	int grade;

	for (;;) {
		printf("Enter grade( end if < 0 OR > 100) :");
		scanf_s("%d", &grade);
		if (grade < 0 || grade > 100)
			break;
		switch (grade / 10) { 
			case 9: printf("A\n"); 
			case 8: printf("B\n"); break;
			case 7: printf("C\n"); break;
			case 6: printf("D\n"); break;
			default: printf("F\n"); break;
		} // end switch

	} // end for

    return 0;
}

