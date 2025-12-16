#define _CRT_SECURE_NO_WARNINGS
void FDY()
{		//初始化   //判断  //调整
	for (int i = 1; i <= 10; i++)
	{
		if (i == 5)//等于5时跳过此次所在的for循环
		{
			continue;
		}
		else if (i == 9)//等于9时跳出所在的for循环
		{
			break;
		}
		printf("%d\t", i);
	}
}