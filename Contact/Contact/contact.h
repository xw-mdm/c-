#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 1000
#define NAME_MAX  20
#define SEX_MAX  10
#define TELE_MAX 50
#define ADDR_MAX 100


struct PerInfo   //��Ϣ�Ľṹ��
{
	char name[NAME_MAX];
	int age;
	char sex[SEX_MAX];
	char tele[TELE_MAX];
	char addr[ADDR_MAX];
};

struct Contact   //ͨѶ¼�ṹ
{
	struct PerInfo data[MAX];
	int sz;//ͨѶ¼��ŵ�ǰ����
};
void InitContact(struct Contact* pc);   //��ʼ��ͨѶ¼
void AddContact(struct Contact* pc);  //������ϵ��
void ShowContact(const struct Contact* pc); //��ʾ��ϵ����Ϣ
void DelContact(struct Contact* pc);  //ɾ��һ������Ϣ
void SearchContact(const struct Contact* pc);   //����ָ����ϵ��
void ModifyContact(struct Contact* pc);  //�޸���ϵ��