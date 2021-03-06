// malloc_sort.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "sort.h"
//typedef char rsize_t;

int main()
{
	char word[MAXWORD];
	char *w[N]; int n, i; 

	printf("enter number of string : ");
	scanf_s("%d%*c", &n);
	for (i = 0; i < n; i++) {
		int length;
		scanf_s("%s", word, MAXWORD);
		length = strlen(word) + 1;  // include '\0'
		w[i] = (char *)calloc(length, sizeof(char));
		strcpy_s(w[i], length, word);
	//	strncpy_s(w[i], length, word, MAXWORD);
	}

	sort_words(w, n);
	wrt_words(w, n);

	for (i = 0; i < n; i++) 
		free(w[i]);
	
    return 0;
}

