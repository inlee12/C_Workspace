#include "head.h"

char grade(int ave)
{
	char g;
	switch (ave/10)
	{
	    case 10: case 9: g = 'A'; break;
		case  8 : g='B'; break;
		case  7 : g='C'; break;
		case  6 : g='D'; break;
		default : g='F'; break;
	}
	return g;
}

int average(int a, int b)
{
	return (a+b)/2;
}

		
