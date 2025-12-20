#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d %d", &a, &b);
	//int min = (a < b) ? a : b;
	//int m = min;
	int sum = a * b;
	while(c=a%b)//而公倍数也可以用这套式子,前面a*b后面/b即可
	{
		/*if (a % m == 0 && b % m == 0)
			break;
		m--;*/
		a = b;
		b = c;

	}
	printf("最大公约数为%d\n", b);
	printf("最小公倍数为%d\n", sum / b);

	return 0;
}