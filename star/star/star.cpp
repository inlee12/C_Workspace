// star.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#define FOREVER 1
#define STOP 20

void f(void);

int main()
{
	while (FOREVER)
		f();
    return 0;
}

void f(void) {
	static int cnt = 0;

	printf("cnt = %d\n", ++cnt);
	if (cnt == 20 )
		exit(0);
}
