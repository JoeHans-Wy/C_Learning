#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a = 3;
	int b = 5;
	printf("a = %d,b = %d\n", a, b);
	a = a ^ b;//a=3^5
	b = a ^ b;//b=3^5^5=3
	a = a ^ b;//a=3^5^3=5，^可以实现两个数的交换，但除特定情况一般不会使用，可读性差，创建临时变量存储即可交换
	printf("a = %d,b = %d\n", a, b);
	return 0;
}