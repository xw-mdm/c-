#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <assert.h>
////VALID 表示结果合法
////INVALID 表示结果非法
//enum State
//{
//	VALID,//0
//	INVALID//1
//};
////默认结果可能非法，当正确转换后再改为合法
//enum State state = INVALID;
// int my_atoi(char *str)
//{
//	int flag = 1;
//	long long ret = 0;
//	assert(str);
//	state = INVALID;
//	//跳过空白字符
//	while (isspace(*str))
//	{
//		str++;
//	}
//	if (*str == '\0')
//	{
//		return 0;
//	}
//	//跳过正负号
//	if (*str == '+')
//	{
//		str++;
//	}
//	else if (*str == '-')
//	{
//		flag = -1;
//		str++;
//	}
//	//开始转换数字字符直到非数字字符
//	while (isdigit(*str))
//	{
//		ret = ret * 10 + flag * (*str - '0');
//		if ((ret > INT_MAX) || (ret < INT_MIN))
//		{
//			return 0;
//		}
//		str++;
//	}
//	//正常停止
//	if (*str == '\0')
//	{
//		state = VALID;
//		return (int)ret;
//	}
//	else
//	{
//		//遇到非数字字符
//		return (int)ret;
//	}
//}
//int main()
//{
//	char *p = "-1212212121212";
//	printf("%d\n", my_atoi(p));
//	return 0;
//}


//char* my_strncat(char* dest,char *src,int n)
//{
//	
//	{
//		char * tmp = dest;
//		while (*dest)
//		{
//			dest++;
//		}
//		int i;
//		for (i = 0; src[i] && i < n; i++)
//		{
//			dest[i] = src[i];
//		}
//		dest[i] = 0;
//		return tmp;
//	}
//}
//int main()
//{
//
//	int n;
//	char dest[20] = "Hello";
//	char src[10] = "World";
//	char* tmp=my_strncat(dest, src, 5);
//	printf("%s\n", tmp);
//	return  0;
//}


//char* mystrncpy(char * dest, const char * src, int n)
//{
//	int i;
//	for (i = 0; src[i] && i < n; i++)
//	{
//		dest[i] = src[i];
//	}
//
//	if (i < n)
//	{
//		dest[i] = 0;
//	}
//	return dest;
//}
//int main()
//{
//
//	int n;
//	char dest[20] = {'0'};
//	char src[10] = "World";
//	char* tmp=mystrncpy(dest, src, 5);
//
//	printf("%s\n", tmp);
//	return  0;
//}
//
//void findTwoNum(int arr[], int n, int * pnum1, int * pnum2)
//{
//	int i;
//	int sum = 0;
//	for(i = 0; i < 9; i++)
//	{
//		sum ^= arr[i];
//	} //先找到两个数互相异或的结果
//	int pos=0;
//	for (i = 0; i < 32; i++)
//	{
//		if (sum & 1 << i)
//		{
//			pos = i;
//			break;
//		}
//	} //再找到有分歧的一位。在这一位上，两个数一定是一个1一个0	​
//	*pnum1 = *pnum2 = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] & 1 << pos)
//		{
//			*pnum1 ^= arr[i]; //这一位是1的，放在数1里
//		}
//		else
//		{
//			*pnum2 ^= arr[i]; //这一位是0的，放在数2里
//		}
//	}
//}
//int main()
//{
//	int arr[6] = { 1, 2, 1, 3, 2, 4 };
//	findTwoNum(arr, 6, 1, 0);
//
//
//}


//#define SwapIntBit(n) ((((n) & 0x5555555555555555) << 1)|( ((n) & 0xaaaaaaaaaaaaaaaa) >> 1))
//
//int main() {
//	
//	printf("逆序为: %d", SwapIntBit(11));
//	return 0;
//}


//StructType是结构体类型名，MemberName是成员名。具体操作方法是：
//
//1、先将0转换为一个结构体类型的指针，相当于某个结构体的首地址是0。此时，每一个成员的偏移量就成了相对0的偏移量，这样就不需要减去首地址了。
//
//2、对该指针用->访问其成员，并取出地址，由于结构体起始地址为0，此时成员偏移量直接相当于对0的偏移量，所以得到的值直接就是对首地址的偏移量。
//
//3、取出该成员的地址，强转成size_t并打印，就求出了这个偏移量。
//#define offsetof(StructType, MemberName) (size_t)&(((StructType *)0)->MemberName)
//struct S
//{
//	char a;
//	int b;
//	double c;
//};
//int main()
//{
//	printf("%d ",offsetof(struct S, a));
//	printf("%d ", offsetof(struct S, b));
//	printf("%d ", offsetof(struct S, c));
//}
//strlen的实现  字符串的计算
//int my_strlen(char* str)
//{
//	assert(str != NULL);
//	int count = 0;
//	while (*str)
//	{
//		str++;
//		count++;
//	}
//	return count;
//
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d", len);
//}  

//strcpy   字符串的拷贝

//void my_strcpy(char* dest,char *src)
//{
//	while (*src!='\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//}
//
//int main()
//{
//	char arr[20] = {'0' };
//	char arr2[] = "hello bit";
//	my_strcpy(arr, arr2);
//	printf("%s\n", arr);
//	return 0;
//}

//strcat   字符串追加
//
//char *my_strcat(char *dest,const char *src)
//{
//	char *ret = dest;
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[20] = "bit";	
//	 printf("%s\n", my_strcat(arr1, arr2));
//}

//strcmp   字符串的比较 比较的是字符串中对应ascii码值的大小
//int my_strcmp(char *s1, char *s2)
//{
//	assert(s1&&s2);
//	while (*s1==*s2)
//	{
//		if (*s1 == '\0')
//			return 0;
//		s1++;
//		s2++;
//	}
//	if (*s1 > *s2)
//	{
//		return 1;
//	}
//	else
//		return -1;
//}
//
//int main()
//{
//	char arr1[20] = "abcd ";
//	char arr2[20] = "abcq";	
//	int ret = my_strcmp(arr1,arr2);
//	 printf("%d\n",ret);
//}

//strstr


//char *my_strstr(const char* str1, const char* str2)
//{
//	assert(str1);
//	assert(str2);
//
//	char *cp = (char*)str1;
//	char *substr = (char *)str2;
//	char *s1 = NULL;
//
//	if (*str2 == '\0')
//		return NULL;
//
//	while (*cp)
//	{
//		s1 = cp;
//		substr = str2;
//		while (*s1 && *substr && (*s1 == *substr))
//		{
//			s1++;
//			substr++;
//		}
//		if (*substr == '\0')
//			return cp;
//		cp++;
//	}
//}
//
//int main()
//{
//	char arr1[20] = "abcddfasd ";
//	char arr2[20] = "cdd";	
//	
//	printf("%s\n", my_strstr(arr1,arr2));
//}
 

//strtok   切割函数  @  ，分隔符



//int main()
//{
//	char arr[] = "wxpdhjh@bit.tech";
//	char arr2[30] = {'0'};
//	strcpy(arr2,arr);
//	char*p = ".@";
//	char*ret = NULL;
//	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//
//
//}
#include<ctype.h>   //字符分类函数
//int main()
//{
//	printf("%d ", isspace('2'));
//	printf("%d ", isxdigit('A'));
//}
//
//int main()
//{
//	char arr[20] = { 0 };
//	gets(arr);
//	int i = 0;
//	while (arr[i])
//	{
//		if (isupper(arr[i])){
//		arr[i] = tolower(arr[i]);
//
//	}
//		printf("%c", arr[i]);
//		i++;
//}
//	
//}

//内存操作函数
//memcpy  拷贝不相干两个数组 三个参数 void *dest   void *src   size_t(多少位)
//#include<assert.h>
//
//void* my_memcpy(void* dest, void *src, size_t count)
//{
//	void *ret = dest;
//	assert(dest&&src);
//	while (count--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5, 6 };
//	int arr2[20] = { 0 };
//	my_memcpy(arr2, arr1, 16);
//	
//}

//memmove  处理重叠
//void* my_memmove(void*dest, void*src, size_t count)
//{
//	void *ret = dest;
//	assert(dest&&src);
//	if (dest < src)
//	{
//		while (count--)
//			{
//				*(char*)dest = *(char*)src;
//				++(char*)dest;
//				++(char*)src;
//			}
//	}
//	else
//	{
//		while (count--)
//		{
//			*((char*)dest +count) = *((char*)src + count);
//
//		}
//	}
//	return ret;
//
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 5, 9, 8, 7, 6 };
//	my_memmove(arr + 2, arr, 16);
//}

////atoi
//enum State
//
//{
//
//	VALID,//0
//
//	INVALID//1
//
//};
//enum State state = INVALID;
//int my_atoi(const char* str)
//{
//	int flag = 0;
//	if (str == NULL)
//		return 0;
//	if (*str == '\0')
//		str++;
//	if (*str == '+')
//	{
//		flag = 1;
//		str++;
//	}
//	if (*str == '-')
//	{
//		flag = -1;
//		str++;
//	}
//	long long num = 0;
//	while (*str != '\0')
//	{
//		if (isdigit(*str))
//		{
//			num = num * 10 + flag*(*str - '0');
//			if ((num > INT_MAX) || (num < INT_MIN))
//			{
//				return 0;
//			}
//		}
//		else
//		{
//			return 0;
//		}
//		str++;
//	}
//	state = VALID;
//	return num;
//}
//
//int main()
//{
//	int ret = my_atoi("    -123ab");
//	if (state == VALID)
//	{
//		printf("合法的：%d", ret);
//	}
//	else
//	{
//		printf("不合法的：%d", ret);
//	}
//}


//单身狗  一组数字中两个只出现一次的数

int main()
{
	//1 2 3 4 5 1 2 3 4 6
	// 1 3 5 1 3
	// 2 4 6 2 4
	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4, 6 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int num = 0;
	int n1 = 0;
	int n2 = 0;
	for (i = 0; i < sz; i++)
	{
		num ^= arr[i];//异或
	}
	//找出um的二进制中第一个为1的位
	int pos = 0;
	for (i = 0; i < 32; i++)
	{
		if (((num >> i) & 1) == 1)
		{
			pos = i;
			break;
		}
	}
	for (i = 0; i < sz; i++)
	{
		if (((arr[i] >> pos) & 1) == 1)
		{
			n1 ^= arr[i];
		}
	}
	for (i = 0; i < sz; i++)
	{
		if (((arr[i] >> pos) & 1) == 0)
		{
			n2 ^= arr[i];
		}
	}
	printf("%d %d", n1, n2);
	return 0;
}