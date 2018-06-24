// struct.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

struct student {
	char name[20];
	int ID;
	int grade;
};
int main()
{
	struct student s1;

	printf("Enter name, ID, grade: ");
	scanf_s("%s%d%d%*c", s1.name, 20, &s1.ID, &s1.grade); // use %*c to skip ‘\n’
	printf("name=%s  ID=%d  grade=%d\n", s1.name, s1.ID, s1.grade);
	return 0;
}


/*
struct student {
	char name[20];
	int ID;
	int grade;
};
typedef struct student STU; // struct student => student
*/

/*int main()
{
	STU s1, *p= &s1;

	printf("Enter name, ID, grade: ");
	scanf_s("%s%d%d%*c", s1.name, 20, &s1.ID, &s1.grade); 
	printf("name=%s  ID=%d  grade=%d\n", s1.name, s1.ID, s1.grade);
	printf("name=%s  ID=%d  grade=%d\n", (*p).name, (*p).ID, (*p).grade);
	printf("name=%s  ID=%d  grade=%d\n", p->name, p->ID, p->grade);
	return 0;
}
*/