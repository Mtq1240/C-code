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

#include<stdio.h>
#include<math.h>
int main()
{
	//1.判断位数 - n
	//2.求各位数n次方之和
	//3.判断是否为水仙花数
	int i = 0;
	for (i = 0; i <= 100000; i++)
	{
		//1.判断位数 - n
		int n = 1;//因为至少是一位数
		int temp = i;//创建一个变量不使i发生变化
		while (temp/10)
		{
			temp = temp / 10;
			n++;
		}
		//2.求各位数n次方之和
		temp = i;
		int sum = 0;
		while (temp)
		{
			sum += pow(temp % 10, n);
			temp = temp / 10;
		}
		//3.判断
		if (sum == i)
		{
			printf("%d ", i);
		}
	}
	return 0;
}


//6.
//写一个函数，可以逆序一个字符串的内容。
#include<stdio.h>
#include<assert.h>
#include<string.h>
void reverse(char *arr)
{
	assert(arr);
	char* left = arr;
	char* right = arr + strlen(arr) - 1;

	while (left < right)
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
	char arr[] = "hello bit";
	reverse(arr);
	printf("%s\n", arr);
	return 0;
}

//用C语言在屏幕上打印菱形
#include<stdio.h>
int main()
{
	int line = 0;
	scanf("%d", &line);//7
	//上三角
	
	for (int i = 0; i < line; i++)
	{
		//行
		//打印空格
		int j = 0;
		for (j = 0; j < line-1-i; j++)
		{
			printf(" ");
		}
		//打印*
		for (j = 0; j <2*i+1; j++)
		{
			printf("*");
		}
		printf("\n");
		
	}

	//下三角
	for (int i = 0; i < line-1; i++)
	{
		//行
		//打印空格
		int j = 0;
		for (j = 0; j <=i; j++)
		{
			printf(" ");
		}
		//打印*
		for (j = 0; j<2*(line-1-i)-1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}


//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）。

#include<stdio.h>
int main()
{
	int money = 0;
	int total = 0;
	scanf("%d", &money);

	if (money > 0)
		total = 2 * money - 1;
	printf("%d\n", total);
	//int money = 0;
	//scanf("%d", &money);
	//int total = money;//1.有多少钱就能喝多少瓶
	//int empty = money;//2.有多少钱就有多少空瓶子

	//while (empty >= 2)
	//{
	//	total += empty / 2;
	//	empty = empty / 2 + empty % 2;
	//}
	//printf("%d\n", total);
	return 0;
}




//S开发环境调试下面的代码，画图解释下面代码的问题
#include <stdio.h>
int main()
{
    int i = 0;
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    for(i=0; i<=12; i++)
    {
        arr[i] = 0;
        printf("hello bit\n");
    }
    return 0;
}

//答案解析：
//以下代码有两个问题：1. 数组访问越界   2. 死循环
// 以下代码再vs2013下会造成死循环，原因：
// 栈内存：
               |CC  CC  CC  CC|
         arr[0]|01  00  00  00|\
         arr[1]|02  00  00  00| \
         arr[2]|03  00  00  00|  \
         arr[3]|04  00  00  00|   \
         arr[4]|05  00  00  00|    \
         arr[5]|06  00  00  00|    /  arr的空间
         arr[6]|07  00  00  00|   /
         arr[7]|08  00  00  00|  /
         arr[8]|09  00  00  00| /
         arr[9]|0A  00  00  00|/
               |CC  CC  CC  CC|
               |CC  CC  CC  CC|
               |00  00  00  00| i的空间
               |CC  CC  CC  CC|
//for循环中，i的内容是从0，一直增加到12，而数组只有10个空间，因此会越界
//每次访问arr数组i号位置时，都会将该位置内容设置为0，当访问到arr[12]时，也会将该位置内容设置为0，而位     
//置恰好为i的位置，即a[12]恰巧将i设置为0，因此造成死循环。
		       

		       
		       
//*		       
//调整奇数偶数顺序
//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，

#include<stdio.h>
void print(int *arr,int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

void move(int*arr,int sz)
{
	int left = 0;
	int right = sz-1;

	while (left < right)
	{
		//从前向后找偶数,如果找到奇数就不进入循环,则会进入下面的交换
		while ((left<right)&&(arr[left]%2==1))//不加入left<right则会越界访问
		{
			left++;
		}
		//从后向前找奇数,如果找到偶数就不进入循环,则会进入下面的交换
		while ((left < right) && (arr[right] % 2 == 0))
		{
			right--;
		}
		//交换
		if (left < right)
		{
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10};
	int sz = sizeof(arr) / sizeof(arr[0]);
	move(arr, sz);
	print(arr,sz);
	return 0;
}
