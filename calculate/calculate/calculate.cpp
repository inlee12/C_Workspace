// calculate.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	int i, j, t;

	printf("Enter two integer : ");
	scanf_s("%d%d", &i, &j);
	siwtch(t) {
		case '+': add(i, j); break;
		case '-': sub(i, j); break;
		case '*': mul(i, j); break;
		case '/': div(i, j); break;
		case '%': mod(i, j); break;
	}

    return 0;
}

