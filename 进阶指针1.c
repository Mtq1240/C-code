//字符指针
//本质上是将字符串的首字符的地址存储到指针变量中
#include<stdio.h>
int main()
{
	char strl[] = "hello bit.";
	char str2[] = "hello bit.";
	const char* str3 = "hello bit.";
	const char* str4 = "hello bit.";

	if (strl == str2)
		printf("str1 and str2 are same\n");
	else
		printf("str1 and str2 are not same\n");//数组名就是数组首元素地址,开辟了两个数组所以不相同
	if (str3 == str4)
		//指针是先有内容,再用指针去指向内容的首个地址,所以内容相同地址也相同
		printf("str3 and str4 are same\n");//"hello bit."这里是常量字符串,不能改变,所以指向了同一个地址
	else
		printf("str3 and str4 are not same\n");
	return 0;
}


//数组指针
#include<stdio.h>
int main()
{
	int a[5] = { 1,2,3,4,5 };
	int b[5] = { 2,3,4,5,6 };
	int c[5] = { 3,4,5,6,7 };

	int* arr[3] = { a,b,c };

	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 5; j++)
		{
			/*printf("%d ", *(arr[i] + j));*/
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}



//数组指针 - 是指向数组的指针
#include<stdio.h>
int main()
{
	int a = 10;
	int* pa = &a;
	char ch = 'w';
	char* pc = &ch;

	int arr[10] = { 1,2,3,4,5 };
	int(*parr)[10] = &arr;//取出的是数组的地址
	//parr 就是一个数组指针 - 其中存放的就是数组的地址 
	return 0;
}



#include<stdio.h>
int main()
{
	int arr[10] = { 0 };

	int* p1 = arr;//指向的是数组的首元素地址
	int(*p2)[10] = &arr;//指向的是这个数组的地址

	printf("%p\n", p1);
	printf("%p\n", p1+1);//首元素地址+1到下一个元素的地址,跳过四个字节

	printf("%p\n", p2);
	printf("%p\n", p2+1);//跳过一个数组的地址,四十个字节


	return 0;
}




//数组名是数组首元素地址
//有2个例外:
//1. sizeof(数组名) - 数组名表示整个数组,计算的是整个数组大小,单位是字节
//2. &数组名 - 数组名表示整个数组,取出的是整个数组的地址

//数组指针的使用:
#include<stdio.h>
//用一维数组指针指向二维数组的第一行的地址
void print2(int (*p)[5],int r,int c)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			//p是所指元素的地址,即二维数组第一行的地址,解引用就拿到了arr[i],即arr[i]的首元素地址
			printf("%d ", *(*(p + i)+j));//*(p + i):对每一行解引用就得到数组名,首元素地址
			//*(*(p + i)+j)  首元素的地址+1就是下一个元素的地址,解应用得到其中元素
		}
	}
}
int main()
{
	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };

	print2(arr, 3, 5);//二维数组的数组名表示首元素的地址,二维数组的首元素是:第一行
	return 0;
}
