// word_count.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	char a[100]; int count=0;

	printf("[INPUT]\n");
	count = 0;
	for (;;) {
		scanf_s("%s", &a, 100);
		if (a[0] == 'Q')
			break;
		count++;
	}
	printf("[OUTPUT]\n%d\n", count);

    return 0;
}

