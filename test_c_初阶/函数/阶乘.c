#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int fac(int n)			//递归实现
{
	if (n <= 1)
		return 1;
	else
		return n * fac(n - 1);
}

//int fac(int n)		//循环实现
//{
//	int i = 0;
//	int sum = 1;
//	for (i = 1; i <= n; i++)
//	{
//		sum *= i;
//	}return sum;
//}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int sum = fac(n);
	printf("sum = %d\n", sum);

	return 0;
}