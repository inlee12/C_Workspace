#include <stdlib.h>
#include <string.h>
#include "fibonacci.h"
#include "reverse.h"

int main(int argc, char *argv[]) {
		int i = 1;

//#ifdef FIBONACCI 
#ifdef _FIBONACCI_H
		if (i < argc) {
			print_fib(atoi(argv[i]));
			i++;
		}
#endif

//#ifdef REVERSE 
#ifdef _REVERSE_H
		if (i < argc) {
			reverse(argv[i], strlen(argv[i]));
			i++;
		}
#endif
		return 0;
}