// static.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	int i, sum;
	i = sum = 0;
	while ((i += 2) <= 30) {
		sum += i;
    }
	printf("%d", sum);
    return 0;
}

