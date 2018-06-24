#include <stdio.h>
#include "head.h" 

int main() 
{ 
     int i, j;

     i = 10; 
	 j = 20;    
     
	 printf("Max of i & j is %d\n", max(i,j) == i ? i : j );
     printf("Min  of i & j is %d\n", min(i,j)  == i ? i : j ); 

     return 0; 
} 
