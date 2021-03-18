#define  _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"

//通讯录   保存1000人  每个人的名字  年龄   性别  电话住址
//功能  增加一个人   删除一个人   查找一个联系人   修改一个联系人  显示通讯录中所有人信息
//排序所有人的信息   退出通讯录
//test.c    测试整个逻辑
//contact.h 通讯录相关功能能函数声明
//contact.c   相关函数模块
//静态的通讯录
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
	struct Contact con;//创建了一个通讯录
	InitContact(&con);  //初始化通讯录
	do
	{
		menu();
		printf("请选择:>\n");
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
			printf("退出通讯录\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}