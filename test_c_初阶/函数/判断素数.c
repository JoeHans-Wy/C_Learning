#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<math.h>

int is_prime(int x)
{

	for (int y = 2; y <= sqrt(x); y++)
	{
		if (x % y == 0)//能被整除时直接返回0，终止程序
		{
			return 0;
		}
	}

	return 1;//循环走完还没结束说明没被整除，返回1
}

int main()
{
	int i = 0;
	scanf("%d", &i);
	is_prime(i);

	if (is_prime(i))
	{
		printf("%d是素数",i);
	}
	else
		printf("%d不是素数",i);

	return 0;
}