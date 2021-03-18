
#define  _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"



//��̬�汾
//void InitContact(struct Contact* pc)
//{
//	pc ->sz = 0;
//	//memset   �����ڴ� ��ʼ��ͨѶ¼����
//	memset(pc->data,0,sizeof(pc->data));
//}
//��̬�汾
void InitContact(struct Contact *pc)
{
	pc->sz = 0;
	pc->capacity = DEFAULT_SZ;//Ĭ���ܷ�������Ϣ
	pc->data =(struct PerInfo *) malloc(DEFAULT_SZ*sizeof(struct PerInfo));
	if (pc->data == NULL)
	{
		printf("����ʧ��\n");
		exit(1);
	}
	
}


void AddContact(struct Contact *pc)   //�����Ϣ
{
	if (pc->sz == pc->capacity)
	{
		//����
	struct PeoInfo* ptr=realloc(pc->data,( pc->capacity + 2) * sizeof(struct PerInfo));
	if (ptr == NULL)
	   {
		printf("����ʧ��\n");
		return;
	   }
	else
	{
		printf("���ݳɹ�\n");
		pc->capacity += 2;
	}
	}
	
		printf("����������\n");
		scanf("%s", pc->data[pc->sz].name);
		printf("��������\n");
		scanf("%d",&( pc->data[pc->sz].age));
		printf("�������Ա�\n");
		scanf("%s", pc->data[pc->sz].sex);
		printf("������绰\n");
		scanf("%s", pc->data[pc->sz].tele);
		printf("�������ַ\n");
		scanf("%s", pc->data[pc->sz].addr);
		pc->sz++;
		printf("��ӳɹ�\n");
	
}

void ShowContact(const struct Contact *pc)   //չʾ��ϵ��
{
	int i = 0;
	printf("%-15s\t%-5s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	
	if (pc->sz == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		for (i = 0; i < pc->sz; i++)
		{
			printf("%-15s\t%-5d\t%-5s\t%-12s\t%-20s\n",
				pc->data[i].name,
				pc->data[i].age,
				pc->data[i].sex,
				pc->data[i].tele,
				pc->data[i].addr);
		}
	}
}

static int FindByName(const struct Contact* pc,char name[])  //Ѱ������
{
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->data[i].name, name) == 0)
		{
			return i;
		}
	}
	return -1;

}
void DelContact(struct Contact* pc)
{
	char name[NAME_MAX] = { 0 };
	if (pc->sz == 0)
	{
		printf("ͨѶ¼�գ��޷�ɾ��\n");
	}
	else
	{
		//����Ҫɾ������
		printf("������Ҫɾ��������\n");
		scanf("%s", name);
		int pos=FindByName(pc, name);
		if (pos == -1)
		{
			printf("Ҫɾ�����˲�����\n");
		}
		else
		{
			//ɾ��
			int j = 0;
			for (j = pos; j <pc->sz-1 ; j++)
			{
				pc->data[j] = pc->data[j + 1];
			}
			pc->sz--;
			printf("ɾ���ɹ�\n");
		}
	}
}
void SearchContact(const struct Contact *pc)
{
	char name[NAME_MAX];
	printf("��������ҵ�������>");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("δ���ҵ�\n");
	}
	else
	{
		printf("%-15s\t%-5s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		printf("%-15s\t%-5d\t%-5s\t%-12s\t%-20s\n",
			pc->data[pos].name,
			pc->data[pos].age,
			pc->data[pos].sex,
			pc->data[pos].tele,
			pc->data[pos].addr);
	}
}
void ModifyContact(const struct Contact* pc)//�޸���ϵ��
{
	char name[NAME_MAX];
	printf("�������޸ĵ�������>");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("δ���ҵ�\n");
	}
	else
	{
		printf("����������\n");
		scanf("%s", pc->data[pos].name);
		printf("��������\n");
		scanf("%d", &(pc->data[pos].age));
		printf("�������Ա�\n");
		scanf("%s", pc->data[pos].sex);
		printf("������绰\n");
		scanf("%s", pc->data[pos].tele);
		printf("�������ַ\n");
		scanf("%s", pc->data[pos].addr);
		printf("�޸ĳɹ�\n");
	}
}
void DestroyContact(struct Contact* pc)
{
	free(pc->data);
	pc->data = NULL;
	pc->capacity = 0;
	pc->sz = 0;

}