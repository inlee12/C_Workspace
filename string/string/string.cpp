// string.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	char *a[] = { "one", "two", "three", "four", "five" };
	int i;
	
	for(i=0; i<5; i++)
		printf("%2d %s\n", i, a[i]);


    return 0;
}

