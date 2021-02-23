#define  _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void game()
{
	char ret = 0;
	char board[ROW][COL];
	//��ʼ��Ϊ�ո������
	InitBoard(board,ROW,COL);
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		//�������
		PlayerMove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		ret=CheckWin(board, ROW, COL);
		if (ret != 'c')
			break;
		//��������    �������
		ComputerMove(board, ROW, COL);
		ret = CheckWin(board, ROW, COL);
		if (ret != 'c')
			break;
		DisplayBoard(board, ROW, COL);
	}
	if (ret = '*')
	{
		printf("���Ӯ\n");
	}
	else if (ret = '#')
	{
		printf("����Ӯ\n");
	}
	else if (ret='q'){
		printf("ƽ��\n");
	}
	DisplayBoard(board, ROW, COL);
}

//��������Ϸ
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{//�˵���
		printf("************************\n");
		printf("*****   1.play *********\n");
		printf("*****   2.exit *********\n");
		printf("************************\n");
		printf("���������Ҫ��\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//��Ϸ
			break;
		case 2:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("����������\n");
		}
	} while (input==1);
	 

	return 0;
}