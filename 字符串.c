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







