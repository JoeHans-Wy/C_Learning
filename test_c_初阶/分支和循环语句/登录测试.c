#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	char Password[20] = { 0 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码:\n");
		scanf("%s", Password);
		//比较字符串时不能使用Password == "abcdef"，要用strcmp函数，如果两个相等会返回0
		//strcmp需要头文件#include<string.h>
		if (strcmp(Password, "abcdef") == 0)
		{
			printf("登陆成功\n");
			break;
		}
		else
		{
			printf("密码错误\n");
		}
	}
	if (i == 3)
	{
		printf("三次密码均输入错误，退出程序\n");
	}


	return 0;
}