#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int Toh(int n)
{
	if (n == 1)
		return 1;
	else
		return 2 * Toh(n - 1) + 1;
}		


int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Toh(n);
	printf("%d\n", ret);

	return 0;
}