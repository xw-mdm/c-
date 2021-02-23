#define  _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void game()
{
	char ret = 0;
	char board[ROW][COL];
	//初始化为空格的棋盘
	InitBoard(board,ROW,COL);
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		//玩家下棋
		PlayerMove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		ret=CheckWin(board, ROW, COL);
		if (ret != 'c')
			break;
		//电脑下棋    随机下棋
		ComputerMove(board, ROW, COL);
		ret = CheckWin(board, ROW, COL);
		if (ret != 'c')
			break;
		DisplayBoard(board, ROW, COL);
	}
	if (ret = '*')
	{
		printf("玩家赢\n");
	}
	else if (ret = '#')
	{
		printf("电脑赢\n");
	}
	else if (ret='q'){
		printf("平局\n");
	}
	DisplayBoard(board, ROW, COL);
}

//三子棋游戏
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{//菜单栏
		printf("************************\n");
		printf("*****   1.play *********\n");
		printf("*****   2.exit *********\n");
		printf("************************\n");
		printf("请输入你的要求\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//游戏
			break;
		case 2:
			printf("退出游戏\n");
			break;
		default:
			printf("请重新输入\n");
		}
	} while (input==1);
	 

	return 0;
}