#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 1000
#define NAME_MAX  20
#define SEX_MAX  10
#define TELE_MAX 50
#define ADDR_MAX 100


struct PerInfo   //信息的结构体
{
	char name[NAME_MAX];
	int age;
	char sex[SEX_MAX];
	char tele[TELE_MAX];
	char addr[ADDR_MAX];
};

struct Contact   //通讯录结构
{
	struct PerInfo data[MAX];
	int sz;//通讯录存放当前个数
};
void InitContact(struct Contact* pc);   //初始化通讯录
void AddContact(struct Contact* pc);  //添加联系人
void ShowContact(const struct Contact* pc); //显示联系人信息
void DelContact(struct Contact* pc);  //删除一个人信息
void SearchContact(const struct Contact* pc);   //查找指定联系人
void ModifyContact(struct Contact* pc);  //修改联系人
