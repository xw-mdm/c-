#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<errno.h>
#define MAX 1000
#define NAME_MAX  20
#define SEX_MAX  10
#define TELE_MAX 50
#define ADDR_MAX 100
#define DEFAULT_SZ 2


struct PerInfo   //信息的结构体
{
	char name[NAME_MAX];
	int age;
	char sex[SEX_MAX];
	char tele[TELE_MAX];
	char addr[ADDR_MAX];
};

//静态
//struct Contact   //通讯录结构
//{
//	struct PerInfo data[MAX];
//	int sz;//通讯录存放当前个数
//	
//};
//动态版本
struct Contact   //通讯录结构
{
	struct PerInfo *data;
	int sz;//通讯录存放当前个数
	int capacity;//表示容量大小
};


void InitContact(struct Contact* pc);   //初始化通讯录
void AddContact(struct Contact* pc);  //添加联系人
void ShowContact(const struct Contact* pc); //显示联系人信息
void DelContact(struct Contact* pc);  //删除一个人信息
void SearchContact(const struct Contact* pc);   //查找指定联系人
void ModifyContact(struct Contact* pc);  //修改联系人
void DestroyContact(struct Contact* pc);
void SaveContact(struct Contact* pc);