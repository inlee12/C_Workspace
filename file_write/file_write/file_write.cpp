// file_write.cpp : Defines the entry point for the console application.
#include "stdafx.h"
int main(void){
	FILE *fp = NULL;
	const char *filename = "D:\\LeeInSook\\Workspace\\C_Workspace\\text.txt";
	int i;

	errno_t errno;
	errno = fopen_s(&fp, filename, "w"); // open file
	if(errno != NULL) {
		printf("Cannot open input.txt file.\n");
		fclose(fp);
		return 0;
	}
	for (i = 1; i < 100; i++) 
		fprintf(fp, "%5d", i);
	
	fprintf(fp, "\n");
	fclose(fp);
	return 0;
}


