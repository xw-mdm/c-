#define  _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"

//ͨѶ¼   ����1000��  ÿ���˵�����  ����   �Ա�  �绰סַ
//����  ����һ����   ɾ��һ����   ����һ����ϵ��   �޸�һ����ϵ��  ��ʾͨѶ¼����������Ϣ
//���������˵���Ϣ   �˳�ͨѶ¼
//test.c    ���������߼�
//contact.h ͨѶ¼��ع����ܺ�������
//contact.c   ��غ���ģ��
//��̬��ͨѶ¼
void menu()
{
	printf("*********************************\n");
	printf("*********************************\n");
	printf("****1. add      2.del************\n");
	printf("****3. search   4.modify*********\n");
	printf("****5. show     0.exit***********\n");
	printf("*********************************\n");
	printf("*********************************\n");
}
enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODFIY,
	SHOW	
};
void test()
{
	int input = 0;
	struct Contact con;//������һ��ͨѶ¼
	InitContact(&con);  //��ʼ��ͨѶ¼
	do
	{
		menu();
		printf("��ѡ��:>\n");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODFIY:
			ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con); 
			break;
		case EXIT:
			printf("�˳�ͨѶ¼\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}