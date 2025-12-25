#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

//初始化棋盘
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}

}

//显示初始化好的棋盘
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("------扫雷游戏------\n");
	for(j=0;j<=col;j++)
	{
		printf("%d ", j);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{	
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("------扫雷游戏------\n");
}

//放炸弹
void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;

		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;

		}

	}
}

//排雷
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;//找到非0的个数
	while(win<row*col-EASY_COUNT)
	{
		printf("请输入要排查的坐标:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{	
			if(show[x][y] == '*')
			{
				if (mine[x][y] == '1')//如果那个位置是炸弹
				{
					printf("很遗憾，你被炸弹炸死了\n");
					DisplayBoard(mine, ROW, COL);
					break;
				}
				else		//如果不是炸弹
				{
					win++;
					//统计mine数组，x,y坐标周围有几个炸弹
					int count = get_mine_count(mine, x, y);
					show[x][y] = count + '0';
					DisplayBoard(show, ROW, COL);
				}
			}
			else
			{
				printf("该坐标已被排查过，请重新输入\n");
			}
		}
		else
		{
			printf("输入坐标非法，请重新输入！\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("恭喜你，排雷成功\n");
		DisplayBoard(mine, ROW, COL);
	}
}

int get_mine_count(char board[ROWS][COLS], int x, int y)
{
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = x - 1; i <= x + 1; i++)
	{
		for (j = y - 1; j <= y + 1; j++)
		{
			if (board[i][j] == '1')
				count++;
			else
			{
				board[i][j] = '0';
			}
		}
	}
	return count;
}