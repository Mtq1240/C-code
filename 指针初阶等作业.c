//1.
//以下系统中，int类型占几个字节，指针占几个字节，操作系统可以使用的最大内存空间是多大
//32位系统下：
//int占4个字节，指针表示地址空间个数，总共有2^32个，故占4个字节
//64位系统下：
//int占4个字节，指针表示地址空间个数，总共有2^64个，故占8个字节

//2.
#include<stdio.h>
int i;//i是全局变量,不初始化,默认为0
int main()
{
	i--;
	//sizeof这个操作符,算出的结果类型是unsigned int
	//有符号整型和无符号整型比较大小会先把有符号整型转换为有符号整型
	if (i > sizeof(i))//-1
	{
		printf(">\n");
	}
	else
	{
		printf("<\n");
	}
	return 0;
}


//3.
//求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222
#include<stdio.h>
int main()
{
	int a = 0;
	int n = 0;
	int temp = 0;
	int sum = 0;
	int i = 0;
	scanf("%d%d", &a,&n);
	for ( i = 0; i < n; i++)
	{
		temp = temp *10 + a;
		sum =sum+ temp;
	}
	printf("%d", sum);
	return 0;
}


//4.
//写一个函数打印arr数组的内容，不使用数组下标，使用指针。
//arr是一个整形一维数组。
#include<stdio.h>
void print(int *arr,int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *arr + i);
	}
}
int main()
{
	int arr[]={ 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	print(arr, sz);
	return 0;
}


//5.
////打印水仙花数
//求出0～100000之间的所有“水仙花数”并输出。
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，
//如 : 153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。

