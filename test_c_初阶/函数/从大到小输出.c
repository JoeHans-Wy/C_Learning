#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

extern int Swap(int* a, int* b);
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d %d %d", &a, &b, &c);

	if (a < b)
	{
		Swap(&a, &b);
	}
	if (a < c)
	{
		Swap(&a, &c);

	}
	if (b < c)
	{
		Swap(&b, &c);
	}

	printf("%d %d %d", a, b, c);

	return 0;
}