#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void div()
{
	int a = 7 % 2;
	int b = 7 / 2;
	printf("a = %d,b = %d\n", a, b);
}

void rightmove()
{
	int a = 7;
	int b = a >> 1;//a会被转换为二进制，7的补码还是源码在二进制中为0111，右移一位变为0011，即3
	int c = -a >> 1;//a会被转换为二进制，- 7的补码是源码取反后+1，在二进制中为1001，右移一位变为1100，减1取反后为0100，符号位不变，即-4
	printf("a = %d,b = %d,c = %d\n", a, b, c);
}

void leftmove()
{
	int a = 7;
	int b = a << 1;//a会被转换为二进制，7在二进制中为0111，左移一位变为1110，即14
	int c = -a << 1;//a会被转换为二进制，- 7的补码是源码取反后+1，在二进制中为1001，左移一位变为0010，减一后取反为 1110 符号位还是1，即-14
	printf("a = %d,b = %d,c = %d\n", a, b, c);
}

int main()
{
	div();
	rightmove();
	leftmove();
	return 0;
}
