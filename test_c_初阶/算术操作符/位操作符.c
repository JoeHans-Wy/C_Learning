#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a = 3;	//补码为0000 0011
	int b = -5;	//补码为1111 1011
	int c = a & b;	//& 按位与，即同真才为真，即0000 0011，为3
	printf("c = %d\n", c);
	c = a | b;
	printf("c = %d\n", c);// | 按位或，即有一为真即为真，即 1111 1011，即-5
	c = a ^ b;
	printf("c = %d\n", c);// ^ 按位异或，即相同为0，不同为1，即1111 1000，即-8
	return 0;
}