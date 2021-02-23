#define  _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
 
//��Ϸ��ʵ��
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
	printf("�������\n");
	printf("���������ߵ�����\n");
	while (1)
	{
		
		scanf("%d%d", &x, &y);
		if (x >= 1 && y >= 1 && x <= row&&y <= col)
		{
			if (board[x-1][y-1] != ' ')
			{
				printf("���걻ռ�ã�����������"); 
			}
			else{
				board[x - 1][y - 1] = '*';
				break;
			}
		}
		else
		{
			printf("������������,����������");
		}
	}
}
void ComputerMove(char board[ROW][COL], int row, int col)
{
	
	printf("������>\n");
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
//�ж���Ӯ
//�ж������Ƿ�����
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
//�����ж�
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
//�����ж�
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
//�Խ����жϴ�����
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
	//�Խ��ߴ��ҵ���
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
		//�ж��Ƿ�Ϊ����
		if (IsFull(board, row, col) == 1)
			return 'q';
		//ʤ��δ����������Ϸ
		return 'c';
	}