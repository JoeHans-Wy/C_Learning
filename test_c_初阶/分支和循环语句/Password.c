#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void PassWord()
{
	char Password[20] = {0};
	printf("请输入密码:");
	scanf("%s", Password);//存入字符串到空格或换行符为止

	int ch = 0;
	while ((ch = getchar()) != '\n')//getchar()要一直读到换行符，读不到不出循环，可以有效清理缓存区
	{
		;//读不到就继续，一直到getchar()=='\n'才停止循环
	}

	printf("请进行确认Y/N:");
	int ret = getchar();
	if (ret == 'Y')
	{
		printf("YES\n");
	}
	else
		printf("NO\n");

}