#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
////求出0～100000之间的所有“水仙花数”并输出。
//int main()
//{
//	int i = 0;
//	for (; i <= 100000; i++)
//	{
//		int sum = 0;
//		int tmp = i;
//		int count = 1;
//		while (tmp / 10) //获取多少位
//		{
//			count++;
//			tmp /= 10;
//		}
//		tmp = i;
//		while (tmp)
//		{
//			sum+=pow(tmp % 10, count);
//			tmp /= 10;
//		}
//		if (sum == i){
//			printf("%d", i);
//		}
//	}
//}
//打印菱形
//int main()
//{
//	int n = 0;
//	int i = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		int j = 0; 
//		for (j = 0; j < n-1-i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2*i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i < n-1; i++)
//	{
//		int j = 0;
//		for (j = 0; j <=i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * (n-1-i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}

//练习
//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("%d%d%d", a, b, c);
//}
//strlen函数的实现
//int my_strlen(const char * str)
//{
//	int i = 0;
//	const char *eos = str;
//	while (*eos++)
//		i++;
//	return(i);
//}
//int main()
//{
//	char str[] = "dfaafa";
//	int ret = my_strlen(str);
//	printf("%d", ret);
//}
//strcopy的实现
//char * my_strcpy(char * dst, const char * src)
//{
//	char * cp = dst;
//	while (*cp++ = *src++);
//	return(dst);
//}
//int main()
//{
//	char src[] = "dfaafa";
//	char dst[] = "0";
//	my_strcpy(dst,src);
//	printf("%s", dst);
//	}

//调整数组使奇数全部都位于偶数前面
//void move(int arr[], int n)
//{
//	int i = 0;
//	int k = n - 1;
//	int tmp = 0;
//	while (i < k)
//	{
//		while ((i<k) && arr[i] % 2 == 1)
//		{
//			i++;
//		}
//		while ((i<k) && arr[i] % 2 == 0)
//		{
//			k--;
//		}
//		if (i < k)
//		{
//			 tmp = arr[i];
//			arr[i] = arr[k];
//			arr[k] = tmp;
//		}
//	}
//}
//void swap_arr(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int tmp = 0;
//	while (left<right)
//	{
//		while ((left<right) && (arr[left] % 2 == 1))
//		{
//			left++;
//		}
//		while ((left<right) && (arr[right] % 2 == 0))
//		{
//			right--;
//		}
//		if (left<right)
//		{
//			tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	swap_arr(arr,sz);
//	int i = 0;
//	for (i=0; i < sz; i++){
//		printf("%d ", arr[i]);
//	}
//}

//int main()
//{
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//	c = a + b;
//	printf("%d%d", a + b, c);
//	return 0;
//}
//在屏幕上打印杨辉三角。

//
int main()
{
	int i = 0;
	int arr[10][10] = { 0 };
	for (i = 0; i < 10; i++)
	{
		int j = 0;
		for (j = 0; j <= i; j++)
		{
			if (j == 0)
				arr[i][j] = 1;
			if (i ==j)
				arr[i][j] = 1;
			if (i>1 && j > 0)
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
		}
	}
	for (i = 0; i <10; i++)
	{
		int j = 0;
		for (j = 0; j <= i; j++)
		{
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
}

////说假话
//int main()
//{
//	int killler = 0;
//	for (killler = 'a'; killler <= 'd'; killler++)
//	{
//		if ((killler != 'a') + (killler == 'c') + (killler == 'd') + (killler != 'd') == 3)
//		{
//			printf("%c", killler);
//		}
//	}
//
//}
// 
//
//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果：
//A选手说：B第二，我第三；
//B选手说：我第二，E第四；
//C选手说：我第一，D第二；
//D选手说：C最后，我第三；
//E选手说：我第四，A第一；
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。
//
//int  main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b==2)+(a==3)==1)&&
//							((b==2) + (e==4) == 1) &&
//							((c==1) + (d==2) == 1) &&
//							((c == 5) + (d== 3) == 1) &&
//							((e == 4) + (a == 1) == 1) )
//						{
//							if (a*b*c*d*e==120)
//							printf("a=%db=%dc=%dd=%de=%d\n", a, b, c, d, e);
//
//							}
//
//
//					}
//				}
//
//			}
//
//		}
//
//	}
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = -10;
//	return 0;
//}
//#include <stdio.h> 
//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d,b=%d,c=%d", a, b, c);
//	return 0;
//}
//int main()
//{
//	int i = -20; 
//	unsigned int j = 10;
//	printf("%d\n", i + j);
//	//按照补码的形式进行运算，最后格式化成为有符号整数
//}
//int main()
//{
//	int n = 9;
//	float *pFloat = (float *)&n;
//	printf("n的值为：%d\n", n);
//	printf("*pFloat的值为：%f\n", *pFloat);
//	*pFloat = 9.0;
//	printf("num的值为：%d\n", n);
//	printf("*pFloat的值为：%f\n", *pFloat);
//	return 0;
//}