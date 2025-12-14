#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//≤‚ ‘≤÷ø‚ π”√

extern int ADD(int x, int y);
extern int SUB(int x, int y);
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);

	int sum = ADD(a, b);
	int sum1 = SUB(a, b);
	printf("%d\n", sum);
	printf("%d\n", sum1);

	return 0;
}