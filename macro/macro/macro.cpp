// macro.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"

int  average(int x, int y) {
     
	printf("x = %d, y = %d \n", x, y);
	return (x + y) / 2;
}
int main() {
	printf("%d", average(4, 10));
	return 0;
}

