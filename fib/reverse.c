#include <stdio.h>

void reverse(char *str, int len) {
//	char reversed[len+1];
	char reversed[100];
	int i, j;
	int pos = 0;
	int caret = len;
	reversed[len] = '\0';

	for (i = len - 1; i >= -1; --i)
	{
		if (i == -1 || str[i] == ' ')
		{
			for (j = i + 1; j < caret; ++j){
				reversed[pos++] = str[j];
			}
			if (i != -1) {
				reversed[pos++] = ' ';
			}
			caret = i;
		} //end if
	}
	printf("%s\n", reversed);

}