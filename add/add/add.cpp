// add.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main()
{
	int Math, English;
	printf("Enter your math score:");
	scanf_s("%d", &Math);
	printf("Enter your English score:");
	scanf_s("%d", &English);
	float avg;
	avg = (float)(Math + English) / 2;
	printf("Average:%.1f\n", avg);
	printf("Grade:");
	if (avg >= 90 && avg <= 100)
	{
		printf("A\n");
	}
	else if (avg >= 80 && avg < 90)
	{
		printf("B\n");
	}
	else if (avg >= 70 && avg < 80)
	{
		printf("C\n");
	}
	else if (avg >= 60 && avg < 70)
	{
		printf("D\n");
	}
	else
	{
		printf("F\n");
	}
	return 0;
}

