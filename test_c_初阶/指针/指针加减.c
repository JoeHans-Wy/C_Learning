#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int my_strlen(char* p)//创建了个char类型的指针变量p来接收字符串数组首地址
{
	char* start = p;//新创建了一个同类型的起点指针变量来记录首地址
	while (*p != '\0')//当地址上的元素不为'\0'时，p记录的地址自增，一直找到\0,地址才固定，相当于\0的首地址
	{
		p++;
	}
	return (p - start);//最后拿\0的首地址与初始首地址相减就可以得到数组的个数
}

int main()
{
	int len = my_strlen("abcdef");
	printf("%d", len);
	return 0;
}