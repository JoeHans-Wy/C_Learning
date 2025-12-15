#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void GET()
{
	//getchar();
	//int ch = getchar();
	//printf("%c\n", ch);
	//putchar(ch);
	//printf("\n");
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}
}