#define  _CRT_SECURE_NO_WARNINGS 1
#include "game.h"


void game()
{
	char show[ROW][COL];//排查出的数组
	char mine[ROW1][COL1];//存放布置得雷
	//初始化
	Initboard(mine, ROW1, COL1,'0');
	Initboard(show, ROW1, COL1,'*');
	ShowBoard(mine, ROW,COL);
	ShowBoard(show, ROW,COL);
	//布雷
	SetMine(mine,ROW,COL,EASY);
	ShowBoard(mine, ROW, COL);
	ShowBoard(show, ROW, COL);
	//排雷
	FineMine(mine,show,ROW, COL);


}
void menu()
{
	printf("*************\n");
	printf("*  1.play  **\n");
	printf("*  0.exit  **\n");
	printf("*************\n");
}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		
		menu();
		printf("请输入你的选项\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//扫雷游戏
			break;
		case 2:
			break;
		default:
			printf("输入错误请重新输入\n");
			break;
		}
	} while (input);
	return 0;
}