//1.编写一个将一个字符串逆转的程序, 如将a[] = “apple“改为a[] = “elppa“。

#include<stdio.h>
#include<string.h>
int main()
{
	int i, j;
	char str[100],c;
	printf("请输入一串字符:");
	scanf("%s", str);
	for (i = 0, j = strlen(str) - 1; i < j; i++, j--)
	{
		 c = str[i];
		str[i] = str[j];
		str[j] = c;
	}
	printf("%s", str);
	return 0;
}


2.//2.在一组数组中找出指定的元素
#include<stdio.h>
int main()
{
	int i;
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		if (k == arr[i])
		{
			printf("找到了,下标是:%d", i);
			break;
		}
	}
	if (i == sz)
		printf("没有找到.\n");
	return 0;
}

//2.(2)折半查找算法
#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 8;

	
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;

	while (left<=right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid+1 ;
		}
		else if (arr[mid] > k)
		{
			right = mid -1;
		}
		else
		{
			printf("找到了,下标是:%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("找不到\n");
	}
	return 0;
}






//倒置字符串
//i like beijing.
//beijing.like i
#include<stdio.h>
void reverse(char* left, char* right)
{
	while (left<right)
	{
		char tmp = 0;
		tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
int main()
{
	char arr[100] = { 0 };
	gets(arr);
	//三步翻转法
	//1.字符串整体翻转
	//.gnijieb ekil i
	//2.每个单词逆序
	//beijing.like i
	int len = strlen(arr);
	reverse(arr, arr + len - 1);
	char *start = arr;
	while (*start)
	{
		char* end = start;
		while (*end != ' ' && *end != '\0')
		{
			end++;
		}
		//逆序单词
		reverse(start, end-1);
		if (*end == ' ')
			//重新开始逆序下一个单词
			start = end + 1;
		else
			start = end;
	}
	printf("%s\n", arr);
	return 0;
}





//字符串左旋
//实现一个函数，可以左旋字符串中的k个字符。
//例如：ABCD左旋一个字符得到BCDA
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB

//法1
#include<stdio.h>
void string_left(char*str,int k)
{
	int n = strlen(str);
	for (int i = 0; i < k; i++)
	{
		//1.每次旋转一个字符
		char tmp = *str;
		//2.把后面的n-1个字符向前挪动
		int j = 0;
		for (j = 0; j < n - 1; j++)
		{
			*(str + j) = *(str + j + 1);
		}
		//3.tmp放在最后
		*(str + n - 1) = tmp;
	}
}
int main()
{
	char arr[] = "ABCDEF";
	int k = 2;
	string_left(arr,k);
	printf("%s\n", arr);
	return 0;
}


//法2
#include<stdio.h>
#include<assert.h>
void reverse(char* left, char* right)
{
	assert(left);
	assert(right);
	while (left < right)
	{
		char tmp = 0;
		tmp = *(left);
		*(left) = *(right);
		*(right) = tmp;
		left++;
		right--;
	}
}
void string_left(char*str,int k)
{
	assert(str);

	//三步翻转法
	int n = strlen(str);
	reverse(str, str + k - 1);//AB逆序
	reverse(str + k, str + n - 1);//CDEF逆序
	reverse(str, str + n - 1);//整体逆序
}
int main()
{
	char arr[] = "ABCDEF";
	int k = 4;
	string_left(arr, k);
	printf("%s\n", arr);
	return 0;
}





//字符串旋转结果
//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//给定s1 = abcd和s2 = ACBD，返回0.
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//AABCD右旋一个字符得到DAABC

#include<stdio.h>
#include<string.h>
#include<assert.h>
int is_string_rotate(char*arr1,char* arr2)
{
	assert(arr1);
	assert(arr2);
	int i = 0;
	int n = strlen(arr1);
	for (i = 0; i < n; i++)
	{
		char tmp = *arr1;
		for (int j = 0; j < n; j++)
		{
			*(arr1 + j) = *(arr1 + j + 1);
		}
			*(arr1 + n - 1) = tmp;

			if (strcmp(arr1, arr2) == 0)
			{
				return 1;
			}
	}
	return 0;
}
int main()
{
	char arr1[] = "ABCDEF";
	char arr2 [] = "CDEFAB";
	int ret = is_string_rotate(arr1, arr2);
	if (ret == 1)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
