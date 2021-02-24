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
	printf("-----------扫雷-----------\n");
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
	printf("-----------扫雷-----------\n");
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
//计算mine数组周围8个坐标有几个雷
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
		printf("请输入要排查的坐标>\n");
		scanf("%d%d", &x, &y);

		//判断坐标合法性
		if (x >= 1 && x <= row&&y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("你被炸死了\n");
				ShowBoard(mine, ROW, COL);
				break;
			}
			else
			{
				//该坐标是不是雷不是雷，统计周围雷的个数
				int lei = GeMinelei(mine, x, y);
				show[x][y]= lei + '0';//存放的是数字字符
				ShowBoard(show, ROW, COL);
				win++;
			}
		}
		else
		{
			printf("违规坐标，请重新输入!\n");
		}
		if (win == row*col - EASY)
		{
			printf("恭喜你，排雷成功\n");
			ShowBoard(mine, ROW, COL);
		}
	}
}


