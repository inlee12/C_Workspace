// function.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>

char grade(int ave);
int average(void);

int main() {
	int i, j, ave;

	for(i=1;i<=10;i++) {
		for (j = 1; j <= 10; j++) {
			ave = average();
			printf("%3d=%c ", ave, grade(ave);
		}
		printf("\n");
	}
    return 0;
}
int average(void) {
	int ma, eng;

	ma = rand() % 101;
	eng = rand() % 101;
	return (ma + eng) / 2;

}

char grade(int ave) {
	switch (ave / 10) {
		case 10: case 9: return 'A';
		case 8: return 'B';
		case 7: return 'C';
		case 6: return 'D';
		default: return 'F';
	}
}

