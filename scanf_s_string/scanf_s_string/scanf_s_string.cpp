// scanf_s_string.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string.h>
#define SIZE 200
int main(){
	char a[SIZE], *p, c; 
	
	printf("Enter a string :");
	gets_s(a);
	printf("Find a character : ");
	c= getchar();
	p = a;
	for ( ; p < a + strlen(a) ; ) {
		p = strchr(p, c);
		puts(p);
		p = p + 1;
	}
    return 0;
}

