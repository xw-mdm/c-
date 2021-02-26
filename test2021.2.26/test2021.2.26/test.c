#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//模拟sqort   冒泡排序 
//#include <stdio.h>
//#include <stdlib.h>
//void swap(int *a, int *b) {
//	int tmp = 0;
//	tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//
//int int_cmp(const void *a, const void *b) {
//	return *(int*)a - *(int *)b;
//}
//
//
//void bubble(void *arr, int size, int wid, int(*cmp)(const void *a, const void *b)) {
//	for (int i = 0; i < size - 1; ++i) {
//		for (int j = 0; j < size - 1 - i; ++j) {
//			if (cmp((int*)arr + j, (int *)arr + (j + 1))>0) {
//				swap((int*)arr + j, (int *)arr + (j + 1));
//			}
//		}
//	}
//}
//
//
//int main() {
//	int arr[8] = { 0, 4, 6, 8, 2, 10, 7, 3 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	int wid = sizeof(arr[0]);
//	bubble(arr, size, wid, int_cmp);
//	for (int i = 0; i < size; ++i) {
//		printf("%d ", arr[i]);
//	}
//	puts("\n");
//	system("pause");
//	return 0;
//}


//字符串排序

//#include <stdio.h>
//#include <stdlib.h>
//int cmp(const void *a, const void *b) {
//	return *(char *)a - *(char*)b;
//}
//
//int main() {
//	char str[7][9] = {
//		"January",
//		"February",
//		"March",
//		"April",
//		"May",
//		"June",
//		"July"
//	};
//	int sum = 7;
//	int i;
//
//	printf("排序前:\n");
//	for (i = 0; i < sum; i++)
//	{
//		printf("%s\n", str[i]);
//	}
//	qsort(str, sum, sizeof(char)* 9, cmp);
//	printf("排序后:\n");
//	for (i = 0; i < sum; i++)
//	{
//		printf("%s\n", str[i]);
//	}
//	system("pause");
//	return 0;
//}
//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
//#include <cassert>
//#include<stdlib.h>
//char* left_move(char *str, int k)
//{
//	assert(str);
//	
//	int len = strlen(str);
//	char tmp = *str;
//	int i = 0;
//	int j = 0;
//	for (j = 0; j < k; j++){
//		for (i = 0; i < len - 1; i++){
//			*(str + i) = *(str + i + 1);
//		}
//		*(str + len - 1) = tmp;
//
//	}
//	return 0;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int k = 2;
//	left_move(arr, k);
//	printf("%s", arr);
//}

//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，请编写程序在这样的矩阵中查找某个数字是否存在。

//int find(int arr[3][3], int k, int r, int c)
//{
//	int x = 0;
//	int y = c - 1;
//	while (x<r&&y>c)
//	{
//		if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else if (arr[x][y]>k)
//			y--;
//		else
//			return 1;
//	}
//	return 0;
//}
//
//int main(){
//	int arr[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int k = 7;
//	int ret=find(arr, k,3,3);
//	if (ret == 1){
//		printf("yes\n");
//	}
//	else
//		printf("No\n");
//}

#include <stdio.h>

int findnum(int a[][3], int x, int y, int f) //第一个参数的类型需要调整
{
	int i = 0, j = x - 1; //从左上角开始遍历

	while (j >= 0 && i < y)
	{
		if (a[i][j] < f) //比我大就向下
		{
			i++;
		}
		else if (a[i][j] > f) //比我小就向左
		{
			j--;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int main()
{
	int a[][3] = { { 1, 3, 5 },
	{ 3, 5, 7 },
	{ 5, 7, 9 } }; //一个示例

	if (findnum(a, 3, 3, 7))
	{
		printf("Yes\n");
	}
	else
	{
		printf("no\n");
	}

	return 0;
}