#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "head.h"  // user defined function

int main()
{
	int i, ave;
    srand(time(NULL));

	for (i=1; i<=100; i++)
	{
		ave = average(rand() % 101, rand() % 101);
        
		printf("%3d=%c  ", ave, grade(ave));

		if( i % 10 == 0 )
             printf("\n");
	}
}
						


