#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void READD(int* p)//每次调用自加一
{
	(*p)++;
}

int main() 
{
	int num = 0;
	READD(&num);
	printf("%d ", num);
	READD(&num);
	printf("%d ", num);
	READD(&num);
	printf("%d ", num);
	READD(&num);
	printf("%d ", num);
	return 0;
}