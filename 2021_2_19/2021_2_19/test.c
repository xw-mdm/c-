#define  _CRT_SECURE_NO_WARNINGS 1
#include "game.h"


void game()
{
	char show[ROW][COL];//�Ų��������
	char mine[ROW1][COL1];//��Ų��õ���
	//��ʼ��
	Initboard(mine, ROW1, COL1,'0');
	Initboard(show, ROW1, COL1,'*');
	ShowBoard(mine, ROW,COL);
	ShowBoard(show, ROW,COL);
	//����
	SetMine(mine,ROW,COL,EASY);
	ShowBoard(mine, ROW, COL);
	ShowBoard(show, ROW, COL);
	//����
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
		printf("���������ѡ��\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//ɨ����Ϸ
			break;
		case 2:
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (input);
	return 0;
}