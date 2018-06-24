// file.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(void)
{
	FILE *fp= NULL;
	const char *filename= "D:\\LeeInSook\\Workspace\\C_Workspace\\text.txt";
	int k;
	int i =0;

	if(fopen_s(&fp, filename, "r") != NULL) {
		printf("Cannot open input.txt file.\n");
		fclose(fp);
		return 0;
	}
	
	while (fscanf_s(fp, "%5d", &k) != EOF) {
		i++;
		printf("%5d", k);
		if (i % 10 == 0) {
			printf("\n");
			i = 0;
		}
		
	}
 
	fclose(fp);
	
	printf("\n");

	return 0;
}
