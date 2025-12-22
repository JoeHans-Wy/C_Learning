#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}

}



void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);	//定义第i行第j列的数组元素
			if (j < col - 1)				
			{
				printf("|");				//总是输出列数-1个 |，2个元素就为 1 个 |
			}
		}
		printf("\n");						//每一行完成后换行

		for (j = 0; j < col; j++)
		{
			if (i < row - 1)				//同上，分隔符也总是行数-1个
			{
				printf("---");

				if (j < col - 1)
					printf("|");			//也总是输出列数-1个
			}

		}
		printf("\n");

	}

}

//玩家下棋
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家请输入:>\n");
	while (1)
	{
		printf("请输入坐标:>");
		scanf("%d %d", &x, &y);
	
		if (x >= 1 && x <= row && y <= col && y >= 1)
		{
			if (board[x-1][y-1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("该位置已被占，请下至其它位置\n");
			}
		}
		else
		{
			printf("坐标非法，请重新输入\n");
		}
	}

}

//电脑下棋
void ComputerMove(char board[ROW][COL], int row, int col) 
{
	printf("电脑下棋:>\n");

	int x = 0;
	int y = 0;
	while(1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
		
	}
}

//满了返回1，不满返回0
int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}

char Iswin(char board[ROW][COL], int row, int col)
{
	//行判断
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] !=  ' ')
			return board[i][1];
	}
	//列判断
	int j = 0;
	for (j = 0; j < col; j++)
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[1][j] != ' ')
			return board[1][j];
	}
	//对角线判断
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
		return board[1][1];
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
		return board[1][1];

	//没有人赢，平局
	if (IsFull(board, row, col))
	{
		return 'Q';
	}
	return 'C';
}


//打印棋盘v1.0
//void DisplayBoard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		printf(" %c | %c | %c \n", board[i][j], board[i][j], board[i][j]);
//		if (i < row - 1)
//			printf("---|---|---\n");
//
//	}
//
//}



