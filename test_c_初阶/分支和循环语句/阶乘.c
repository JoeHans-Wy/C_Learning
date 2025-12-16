#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void FJC()
{
	int n = 0;
	int m = 1;
	int sum = 1;
	scanf("%d", &n);
	for (m=1;m<=n;m++)//让m小于n时，遍历乘以比n小的数
	{
		sum = sum * m;//
	}
	printf("n的阶乘为%d\n", sum);

}
void FSJC()
{
	//int sum = 1;
	//int temp = 0;
	//int n = 0;
	//scanf("%d", &n);//可以计算1!到n!之和
	//for (int i = 1; i <= n; i++)//从1遍历到n,中间所有整数都求阶乘，每进一次i++
	//{
	//	for (int j = 1; j <= i; j++)//从1开始遍历到i,例如n为3时，会逐次求1!,2!,3!
	//	{
	//		sum = sum * j;
	//	}
	//	temp += sum;
	//	sum = 1;
	//}
	//printf("%d\n", temp);

	int n = 1;
	int sum = 0;
	int temp = 0;
	int ret = 1;
	scanf("%d", &temp);
	for (n = 1; n <= temp; n++)
	{
		ret = ret * n;
		sum += ret;
	}
	printf("1到%d的阶乘为%d\n", temp, sum);
}