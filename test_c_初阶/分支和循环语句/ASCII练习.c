#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int arr[] = { 73,32,99,97,110,32,100,111,32,105,116,33 };
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)//i小于数组的个数，以此来遍历输出
	{
		printf("%c", arr[i]);//以字符形式输出ASCII码所对应的字符
	}

	return 0;
}