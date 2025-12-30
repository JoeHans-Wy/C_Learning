#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	int* p = arr;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d-----------%d\n", arr[i], *(p + i));//p是arr数组的首地址，加上i后和arr[i]的意思是一样的，都是跳过i类型的字节，找到下标+i的数组
	}
	printf("\n");
	for (i = 0; i < 10; i++)
	{
		printf("%p-----------%p\n", &arr[i], p + i);//取地址也是一样的道理
	}
	return 0;
}