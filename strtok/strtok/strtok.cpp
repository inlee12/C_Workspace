// strtok.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<string.h>
void reverse(char *str);
int main()
{
	char str[100];
	char *token, *Ntoken;
	printf("Input >> ");
	gets_s(str);
	printf("Input string >> %s\n", str);
	printf("reverse string >>\n");
	reverse(str);
	printf("\nreverse word >>\n");
	token = strtok_s(str, " ", &Ntoken);
	while (token != NULL)
	{
		reverse(token);
		putchar(' ');
		token = strtok_s(NULL, " ", &Ntoken);
	}
	printf("\n");
	return 0;
}
void reverse(char *str)
{
	if (*str == '\0')
		return;
	else
	{
		reverse(&str[1]);
		putchar(str[0]);
	}
}