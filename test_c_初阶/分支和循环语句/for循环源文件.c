#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

extern void FDY();
extern void FJC();
extern void FSJC();
extern void YXCZ();
extern void QTFOR();
int main()
{
	FDY();//用for循环打印1到10
	printf("\n");

	QTFOR();//九九乘法表打印

	FJC();//单个阶乘打印
	FSJC();//1到n的阶乘打印
	YXCZ();//查找数组下标
	return 0;
}