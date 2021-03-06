// struct_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include<stdio.h>

struct student {
	char name[20];
	int ID;
	int grade;
};

int main(void) {
	int  i, min, max;
	struct  student  s[5];     // 结构体数组

	for (i = 0; i < 5; i++) {
		printf("Enter name %d: ", i+1);
		gets_s(s[i].name);                                
		printf("Enter ID: ");
		scanf_s("%d", &s[i].ID);
		printf("Enter grade: ");
		scanf_s("%d%*c", &s[i].grade);          // use %*c to skip ‘\n’
		printf("\n");
	}

	for (i = 0; i < 5; i++)
		printf("%-20s  %-5d  %5d\n", s[i].name, s[i].ID, s[i].grade);
	
	min = max = 0;      // set  1st record as max and min
	for (i = 0; i < 5; i++) {
		if (s[i].grade >  s[max].grade)
			max = i;                  //  max record
		if (s[i].grade < s[min].grade)
			min = i;                 // min record	
	}  
	printf("\nStudent information of highest grade:\n");
	printf("%-20s  %-5d  %5d\n", s[max].name, s[max].ID, s[max].grade);
	printf("\nStudent information of lowest grade:\n");
	printf("%-20s  %-5d  %5d\n", s[min].name, s[min].ID, s[min].grade);

	return 0;
}
