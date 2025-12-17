#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>


void Menu()
{
	printf("############################\n");
	printf("#########  1.play  #########\n");
	printf("#########  0.exit  #########\n");
	printf("############################\n");
}

void game()
{
	//生成随机数
	int ret = rand()%100+1;
	int temp = 0;
	int i = 0;
	printf("请在10次内猜中这个100以内的数:\n");
	//猜数字,在十次内猜中数字
	while(i<10)
	{
		scanf("%d", &temp);
		if (temp < ret)
		{
			printf("猜小了\n");
		}
		else if (temp > ret)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("恭喜你猜对了!!!\n");
			break;
		}
		i++;
		printf("还有%d次机会\n", 10 - i);
	}
	if (i == 10)
	{
		printf("很可惜，十次都没能猜中,到此结束");
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//利用时间戳来生成一个真随机数
	do
	{
		Menu();
		printf("请选择:\n");
		scanf("%d", &input);
		system("cls");
		switch (input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("退出游戏\n");
				break;
			default:
				printf("输入错误，重新选择!\n");
				break;
		}
	} while (input);
	return 0;
}