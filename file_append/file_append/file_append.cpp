// file_append.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"

int main(void)
{
	FILE *fp = NULL;
	const char *filename = "D:\\LeeInSook\\Workspace\\C_Workspace\\text.txt";
	int i;


	if(fopen_s(&fp, filename, "a") != NULL) {
		printf("Cannot open input.txt file.\n");
		fclose(fp);
		return 0;
	}
	for (i = 101; i <200 ; i++)
		fprintf(fp, "%5d ", i);
	fprintf(fp, "\n");

	fclose(fp);

	return 0;
}


