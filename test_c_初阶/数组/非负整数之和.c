#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int Digitsum(unsigned int n)
{
	if (n > 9)
		return Digitsum(n / 10) + n % 10;
	else
		return n;
}

int main()
{
	unsigned int n = 0;
	scanf("%u", &n);
	int ret = Digitsum(n);
	printf("%d", ret);
	return 0;
}
