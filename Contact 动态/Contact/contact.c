
#define  _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"



//静态版本
//void InitContact(struct Contact* pc)
//{
//	pc ->sz = 0;
//	//memset   设置内存 初始化通讯录内容
//	memset(pc->data,0,sizeof(pc->data));
//}
//动态版本
void InitContact(struct Contact *pc)
{
	pc->sz = 0;
	pc->capacity = DEFAULT_SZ;//默认能放三个信息
	pc->data =(struct PerInfo *) malloc(DEFAULT_SZ*sizeof(struct PerInfo));
	if (pc->data == NULL)
	{
		printf("开辟失败\n");
		exit(1);
	}
	
}


void AddContact(struct Contact *pc)   //添加信息
{
	if (pc->sz == pc->capacity)
	{
		//增容
	struct PeoInfo* ptr=realloc(pc->data,( pc->capacity + 2) * sizeof(struct PerInfo));
	if (ptr == NULL)
	   {
		printf("扩容失败\n");
		return;
	   }
	else
	{
		printf("增容成功\n");
		pc->capacity += 2;
	}
	}
	
		printf("请输入名字\n");
		scanf("%s", pc->data[pc->sz].name);
		printf("输入年龄\n");
		scanf("%d",&( pc->data[pc->sz].age));
		printf("请输入性别\n");
		scanf("%s", pc->data[pc->sz].sex);
		printf("请输入电话\n");
		scanf("%s", pc->data[pc->sz].tele);
		printf("请输入地址\n");
		scanf("%s", pc->data[pc->sz].addr);
		pc->sz++;
		printf("添加成功\n");
	
}

void ShowContact(const struct Contact *pc)   //展示联系人
{
	int i = 0;
	printf("%-15s\t%-5s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
	
	if (pc->sz == 0)
	{
		printf("通讯录为空\n");
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

static int FindByName(const struct Contact* pc,char name[])  //寻找名字
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
		printf("通讯录空，无法删除\n");
	}
	else
	{
		//查找要删除人名
		printf("请输入要删除的名字\n");
		scanf("%s", name);
		int pos=FindByName(pc, name);
		if (pos == -1)
		{
			printf("要删除的人不存在\n");
		}
		else
		{
			//删除
			int j = 0;
			for (j = pos; j <pc->sz-1 ; j++)
			{
				pc->data[j] = pc->data[j + 1];
			}
			pc->sz--;
			printf("删除成功\n");
		}
	}
}
void SearchContact(const struct Contact *pc)
{
	char name[NAME_MAX];
	printf("请输入查找得人名字>");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("未查找到\n");
	}
	else
	{
		printf("%-15s\t%-5s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
		printf("%-15s\t%-5d\t%-5s\t%-12s\t%-20s\n",
			pc->data[pos].name,
			pc->data[pos].age,
			pc->data[pos].sex,
			pc->data[pos].tele,
			pc->data[pos].addr);
	}
}
void ModifyContact(const struct Contact* pc)//修改联系人
{
	char name[NAME_MAX];
	printf("请输入修改的人名字>");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("未查找到\n");
	}
	else
	{
		printf("请输入名字\n");
		scanf("%s", pc->data[pos].name);
		printf("输入年龄\n");
		scanf("%d", &(pc->data[pos].age));
		printf("请输入性别\n");
		scanf("%s", pc->data[pos].sex);
		printf("请输入电话\n");
		scanf("%s", pc->data[pos].tele);
		printf("请输入地址\n");
		scanf("%s", pc->data[pos].addr);
		printf("修改成功\n");
	}
}
void DestroyContact(struct Contact* pc)
{
	free(pc->data);
	pc->data = NULL;
	pc->capacity = 0;
	pc->sz = 0;

}