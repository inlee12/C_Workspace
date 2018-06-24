#include "stdafx.h"
#include "math.h"

int sum(int x, int y) {
	return x + y;
}
int abs(int a) {
	if (a >= 0)
		return a; // +
	else
		return -a; // ex)  -(-5) => 5
}
