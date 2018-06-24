// for_break.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
int main()
{
	int grade;

	for (;;) {
		printf("Enter grade :");
		scanf_s("%d", &grade);
		if (grade < 0 || grade > 100) {
			printf("input error !\n");
			return 0;
		}

		switch (grade / 10) {
			case 10: case 9: printf("A\n");
				break;
			case 8: printf("B\n");
				break;
			case 7: printf("C\n");
				break;
			case 6: printf("D\n");
				break;
			default: printf("F\n";
				break;
			} // end switch
	} // end for
	return 0;
}



