#define  _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
 
//游戏的实现
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
			printf(" %c |", board[i][j]);
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++){
				printf("---|");
			}
			printf("\n");
		}
	}
}
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家下棋\n");
	printf("请输入所走的坐标\n");
	while (1)
	{
		
		scanf("%d%d", &x, &y);
		if (x >= 1 && y >= 1 && x <= row&&y <= col)
		{
			if (board[x-1][y-1] != ' ')
			{
				printf("坐标被占用，请重新输入"); 
			}
			else{
				board[x - 1][y - 1] = '*';
				break;
			}
		}
		else
		{
			printf("输入坐标有误,请重新输入");
		}
	}
}
void ComputerMove(char board[ROW][COL], int row, int col)
{
	
	printf("电脑走>\n");
	while (1)
	{
		int x = rand() % row;
		int y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}
//判断输赢
//判断棋盘是否满了
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


char CheckWin(char board[ROW][COL], int row, int col)
{
//三行判断
	int i = 0;
	int j = 0;
for (i = 0; i < row; i++)
{
	for (j = 0; j < col - 2; j++)
	{
		if (board[i][j] == board[i][j + 1] && board[i][j + 1] == board[i][j + 2] && board[i][j + 1] != ' ')
		{
			return board[i][j];

		}
	}
}
//三列判断
for (j = 0; j < col; j++)
{
	for (i = 0; i < row - 2; i++)
	{
		if (board[i][j] == board[i + 1][j] && board[i + 1][j] == board[i + 2][j] && board[i + 1][j] != ' ')
		{
			return board[i][j];
		}
	}
}
//对角线判断从左到右
for (i = 0; i < row - 2; i++)
{
	for (j = 0; j < col - 2; j++)
	{
		if (board[i][j] == board[i + 1][j + 1] && board[i + 1][j + 1] == board[i + 2][j + 2] && board[i + 1][j + 1] != ' ')
		{
			return board[i][j];
		}
	}
}
	//对角线从右到左
	for (i = row - 1; i > 1; i--)
	{
		for (j = 0; j < col - 2; j++)
		{
			if (board[i][j] == board[i - 1][j + 1] && board[i - 1][j + 1] == board[i - 2][j + 2] && board[i - 1][j + 1] != ' ')
			{
				return board[i][j];
			}
		}
	}
		//判断是否为和其
		if (IsFull(board, row, col) == 1)
			return 'q';
		//胜负未定，继续游戏
		return 'c';
	}