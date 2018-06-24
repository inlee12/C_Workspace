// fread.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>

#define SIZE 256

int main() {
	FILE *fp = NULL;
	int i, j;
	unsigned char ori[SIZE][SIZE], out[SIZE][SIZE];
	errno_t errno;

	errno = fopen_s(&fp, "D:\\LeeInSook\\Workspace\\C_Workspace\\airplane.raw", "rb");
	if (errno != NULL) {
		printf("Input file open error!");
		exit(1);
	}
	
	for (i = 0; i<SIZE; i++)
	//	fread(ori[i], sizeof(unsigned char), SIZE, fp);
		fscanf_s(fp, ori[i], sizeof(unsigned char), SIZE)

	fclose(fp);
	fp = NULL;

	for (i = 0; i<SIZE; i++) {
		for (j = 0; j<SIZE; j++)
			out[i][j] = ori[i][j];
	}

	errno = fopen_s(&fp,"D:\\LeeInSook\\Workspace\\C_Workspace\\output.raw", "wb");
	if (errno != NULL) {
		printf("Output file open error!");
		exit(1);
	}
	for (i = 0; i<SIZE; i++) {
		fwrite(out[i], sizeof(unsigned char), SIZE, fp);
	}
	fclose(fp);

}

