// rand_number.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>
#include <time.h>

int main() {
	int i, n;

	srand(time(NULL));
	for (i = 1; i <= 100; i++) {
		n = rand() % 101 ; // grade 0 ~ 100
		printf("%5d", n);
		if (i % 10 == 0)
			printf("\n");
	}

    return 0;
}

