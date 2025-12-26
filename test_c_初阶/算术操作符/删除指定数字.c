#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);

	int arr[50] = { 0 };
	int arr1[50] = { 0 };
	int i = 0;

	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	int del = 0;
	scanf("%d", &del);

	for (i = 0; i < n; i++)//这个是跳过要删除的数，不打印
	{
		if (arr[i] != del)
		{
			printf("%d ", arr[i]);
		}
	}
	printf("\n");
	
	for (i = 0; i < n; i++)//创建了一个数组，装已除了被指定删除的数
	{
		if (arr[i] != del)//不是要删除的数时
		{
			arr1[i] = arr[i];
			printf("%d ", arr1[i]);
		}
	}
	printf("\n");

	int j = 0;
	//创建下标j，不为del的值会让下标i的值赋值到下标j
	//直到遇到del,i++但不赋值，跳过这个数，j也不动，直到下一次符合条件，将后面的值赋给下标j
	for (i = 0; i < n; i++)
	{
		if (arr[i] != del)
		{
			arr[j] = arr[i];
			j++;
		}
	}
	for (i = 0; i < j; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}