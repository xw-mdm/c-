#define  _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void Initboard(char board[ROW1][COL1], int row1, int col1,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row1; i++){
		for (j = 0; j < col1; j++)
		{
			board[i][j] = set;
		}
	}
}
void ShowBoard(char board[ROW1][COL1], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("-----------ɨ��-----------\n");
	for (i = 0; i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <=row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("-----------ɨ��-----------\n");
}
void SetMine(char mine[ROW1][COL1], int row, int col, int count)
{
	while (count)
	{

		int x = rand() % row+1;
		int y = rand() % col + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}
//����mine������Χ8�������м�����
int GeMinelei(char mine[ROW1][COL1], int x, int y)
{
	return mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x - 1][y] +
		mine[x + 1][y] +
		mine[x - 1][y + 1] +
		mine[x][y + 1] +
		mine[x + 1][y + 1] - 8 * '0';
}
void FineMine(char mine[ROW1][COL1], char show[ROW1][COL1], int row, int col)
{
	int win = 0;
	//9*9-10=71
	while (win<row*col - EASY)
	{
		int x = 0;
		int y = 0;
		printf("������Ҫ�Ų������>\n");
		scanf("%d%d", &x, &y);

		//�ж�����Ϸ���
		if (x >= 1 && x <= row&&y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("�㱻ը����\n");
				ShowBoard(mine, ROW, COL);
				break;
			}
			else
			{
				//�������ǲ����ײ����ף�ͳ����Χ�׵ĸ���
				int lei = GeMinelei(mine, x, y);
				show[x][y]= lei + '0';//��ŵ��������ַ�
				ShowBoard(show, ROW, COL);
				win++;
			}
		}
		else
		{
			printf("Υ�����꣬����������!\n");
		}
		if (win == row*col - EASY)
		{
			printf("��ϲ�㣬���׳ɹ�\n");
			ShowBoard(mine, ROW, COL);
		}
	}
}


