#include "stdafx.h"
#include "sort.h"

void sort_words(char *w[], int n) {
	int i, j;
	for (i = 0; i < n; i++) {
		for (j = i+1; j < n; j++)
			if (strcmp(w[i], w[j]) > 0)
				swap(&w[i], &w[j]);
	}
}

void swap(char **p, char **q) {
	char *tmp;
	tmp = *p;
	*p = *q;
	*q = tmp;
}
void wrt_words(char *w[], int n) {
	int i;
	for (i = 0; i < n; i++)
		printf("%s\n", w[i]);

}