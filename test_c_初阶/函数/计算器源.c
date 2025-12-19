#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include"ADD.h"
#include"SUB.h"
#include"MUL.h"
#include"DIV.h"//相当于声明定义

int main()
{
	int x = 14;
	int y = 7;
	printf("%d\n", ADD(x, y));
	printf("%d\n", SUB(x, y));
	printf("%d\n", MUL(x, y));
	printf("%d\n", DIV(x, y));

	return 0;
}