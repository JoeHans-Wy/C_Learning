#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a = -5;
	//在内存中以补码形式存储，即00000000000000000000000000000101
	//为-5时补码为11111111111111111111111111111011
	int i = 0;
	int tmp = 0;
	int count = 0;
	for (i = 0; i < 32; i++)	//整型有32个字节，右移32次
	{
		tmp = a & 1;	//a存储在内存的字节最后一位&1，最后一位为1，则tmp为1，否则为0
		if (tmp == 1)
		{
			count++;	//计数
		}
		a = a >> 1;
	}
	printf("count = %d\n", count);

	return 0;
}