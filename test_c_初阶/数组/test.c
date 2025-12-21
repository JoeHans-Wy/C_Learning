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
	char board[ROW][COL] = { 0 };
	//初始化棋盘
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	//下棋
	while (1)
	{
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
	}


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