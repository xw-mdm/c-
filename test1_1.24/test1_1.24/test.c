//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	printf("Hello world");
//	system("pause");
//	return 0;
//}
//#include <stdio.h>
//int sum(int a)
//{
//	int c = 0;
//	static int b = 3;
//	c += 1;
//	b += 2;
//	return (a + b + c);
//}
//int main()
//{
//	int i;
//	int a = 2;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d,", sum(a));
//	}
//}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n = 0;
	printf("请输入一个数n");
	scanf("%d", &n);
	int i = 0;
	int j = 0;
	for (i = 1; i<=n; i++){
		if (i % 2 == 0){
			j++;
		}
	}printf("偶数的个数%d，奇数的个数%d", j, n - j);
	return 0;
}