#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdlib.h>
//打印每一位上的整数
//void print(int a)
//{
//	if (a > 9)
//		print(a / 10);
//
//	printf("%d\n", a%10);
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	print(a);
//}
//递归的方法求n的阶乘
//long long njie(int n)
//{
//	
//	if (n<= 1)
//		return 1;
//
//	return njie(n - 1)*n;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	long a=njie(n);
//	printf("%d", a);
//
//}
////非递归的方式
//long long Fcw(int n)
//{
//	int i = 1;
//	long long ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;		
//	}
//	return ret;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	long long a=Fcw(n);
//	printf("%ld", a);
//}
//strlen  递归实现
//int my_strlen(char *str)
//{
//	if ('\0' == *str)
//		return 0;
//	else
//		return 1 + my_strlen(1 + str);
//}
//int main()
//{
//	char str[] = "adfvadfa";
//	int a=my_strlen(str);
//	printf("%d", a);
//}
////strlen 非递归实现
//int my_strlen(char* str)
//{
//	int count = 0;
//	while ('\0' != *str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char str[] = "adfvadfa";
//	int a = my_strlen(str);
//	printf("%d", a);
//}
//将字符串逆序

//void reverse_string(char* arr)
//{
//	int len = strlen(arr);
//	char tmp = *arr;
//	*arr = *(arr + len - 1);
//
//	*(arr + len - 1) = '\0';
//	if (strlen(arr + 1) >= 2)
//		reverse_string(arr + 1);
//
//	*(arr + len - 1) = tmp;
//}
//
//int main()
//{
//	int i = 0;
//	char arr[] = "abcdefg";
//	reverse_string(arr);
//	for (i = 0; i < 7; i++)
//	{
//		printf("%c", arr[i]);
//}
//
//	
//}
//字符串逆序   非递归
//void reverse_string(char* arr)
//{
//	char *left = arr;
//	char *right = arr + strlen(arr) - 1;
//
//
//	while (left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//
//
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int i = 0;
//	char arr[] = "abcdefg";
//	reverse_string(arr);
//	for (i = 0; i < 7; i++)
//	{
//		printf("%c", arr[i]);
//	}
//}
//递归的方法求每一位数字之和

//int DigitSum(int n)
//{
//	if (n>9)
//		return DigitSum(n / 10) + n % 10;
//	else
//		return n;
//}
//
//int main()
//{
//	
//	int a = 0;
//	scanf("%d", &a);
//	int b=DigitSum(a);
//	printf("%d", b);
//	
//}

//递归的方法实现n的k次方

//int sqrt(int n, int k)
//{
//	if (k == 0)
//		return 1;
//	else if (k >= 1)
//	{
//		return n*sqrt(n, k - 1);
//	}
//}
//int main()
//{
//	int n = 2;
//	int k = 6;
//	int a=sqrt(n, k);
//	printf("%d", a);
//}

//递归和非递归分别实现求第n个斐波那契数

//long long Fac(int N)
//{
//	if (N < 3)
//		return 1;
//
//	return Fac(N - 1) + Fac(N - 2);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	long a=Fac(n);
//	printf("%d", a);
//}

int fibonacci(int n)
{
	int first = 1;
	int second = 1;
	int third = 1;
	while (n>2){
		third = first + second;
		first = second;
		second = third;
		n--;

	}
	return third;
}
int main()
	{
		int n = 0;
		scanf("%d", &n);
		int a = fibonacci(n);
		printf("%d", a);
	}