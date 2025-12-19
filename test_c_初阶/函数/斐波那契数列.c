#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int Fib(int x)			//递归时算斐波那契数列会有大量重复计算，不适合用递归
{
	if (x <= 2)
		return 1;
	else
		return Fib(x - 1) + Fib(x - 2); //相加等于x,如第x=40,它是由38和39位求出的，会成等比数列，越往后越慢

}

//int Fib(int x)		//用迭代能够有效提高效率，选用时要自己权衡，不能盲目递归
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	
//	while (x >= 3)
//	{
//		c = a + b;
//		a = b;	//前两个加起来等于第三个数
//		b = c;	//之后整体后移一位，总是求第三个数
//		x--;	//一直求到x<3
//	}
//	return c;
//
//}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Fib(n);
	printf("ret = %d\n", ret);

	return 0;
}