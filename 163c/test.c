// Lee In Sook
//  2016.3.30

#include <stdio.h>

int max(int a, int b); // function prototype
int min(int a, int b); // function prototype

int main() 
{ 
     int  i, j;
     i = 10; j = 20;    
     printf("Max of i & j is %d\n", max(i,j) == i ? i : j );
     printf("Min  of i & j is %d\n", min(i,j)  == i ? i : j ); 

     return 0; 
} 
