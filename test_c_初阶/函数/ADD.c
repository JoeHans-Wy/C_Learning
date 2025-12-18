#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void ADD(int* p)//每次调用自加一
{
	(*p)++;
}

int main() 
{
	int num = 0;
	ADD(&num);
	printf("%d ", num);
	ADD(&num);
	printf("%d ", num);
	ADD(&num);
	printf("%d ", num);
	ADD(&num);
	printf("%d ", num);
	return 0;
}