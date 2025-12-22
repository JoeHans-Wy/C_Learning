#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

void menu()
{
	printf("**********************\n");
	printf("*-----  1,play  -----*\n");
	printf("*-----  0,exit  -----*\n");
	printf("**********************\n");

}

void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };
	//初始化棋盘
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	//下棋
	while (1)
	{
		PlayerMove(board, ROW, COL);
		//判断输赢
		ret = Iswin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}

		DisplayBoard(board, ROW, COL);
		ComputerMove(board, ROW, COL);
		//判断输赢
		ret = Iswin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		DisplayBoard(board, ROW, COL);
	}
	if (ret == '*')
	{
		printf("玩家赢了\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢了\n");
	}
	else
	{
		printf("平局\n");
	}
	DisplayBoard(board, ROW, COL);

}

int main()
{
	int input = 0;
	do
	{
		srand((unsigned int) time(NULL));
		menu();
		printf("请选择：\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			system("cls");
			game();
			break;
		case 0:
			system("cls");
			printf("退出\n");
			break;
		default:
			system("cls");
			printf("选择错误\n");
			break;
		}
	} while(input);


	return 0;
}