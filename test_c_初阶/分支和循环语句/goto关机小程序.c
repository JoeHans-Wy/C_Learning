#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char arr[20] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("请注意，你的电脑将在60秒内关机，输入“我是猪”可以取消!\n");
	scanf("%s", arr);
	if (strcmp(arr, "我是猪") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}

	return 0;
}