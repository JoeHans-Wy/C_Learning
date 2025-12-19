#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int jump(int x)
{
	if (x == 1)
		return 1;
	else if (x == 2)
		return 2;
	else
		return jump(x - 1) + jump(x - 2);
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = jump(n);
	printf("ret = %d\n", ret);
	return 0;
}