// test7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	int Mathscore, Englishscore;
	printf("Enter your math score:");
	scanf_s("%d", &Mathscore);
	printf("Enter your English score:");
	scanf_s("%d", &Englishscore);
	float avg;
	avg = (float)(Mathscore + Englishscore) / 2;
	printf("Average:%.1f\n", avg);
	printf("Grade:");
	if (avg >= 90 && avg <= 100)
	{
		printf("A\n");
	}
	else if (avg >= 80 && avg< 90)
	{
		printf("B\n");
	}
	else if (avg >= 70 && avg< 80)
	{
		printf("C\n");
	}
	else if (avg >= 60 && avg< 70)
	{
		printf("D\n");
	}
	else
	{
		printf("F\n");
	}
	return 0;
}

