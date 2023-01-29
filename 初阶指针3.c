//数组和指针
#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
	printf("%p\n", arr);
	printf("%p\n", &arr[0]);
	return 0;
}


#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
	int* p = arr;
	printf("%d\n", arr[2]);
	printf("%d\n", p[2]);
	
	//[] 是一个操作符 2和arr是两个操作数
	//a+b
	//b+a
	printf("%d\n", 2[arr]);
	printf("%d\n", arr[2]);

	//arr[2] -->*(arr+2) -->*(2+arr)

	//arr[2]<==>*(arr+2)<==>*(p+2)<==>*(2+p)<==>*(2+arr)==2[arr]
	//2[arr]<==>*(2+arr)
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 10;
	int* pa = &a;//pa是指针变量,一级指针

	//ppa就是一个二级指针变量
	int** ppa = &pa;//pa也是个变量,&pa取出pa在内存中起始地址
	//*ppa==pa	*pa=a	* *pa==a
	return 0;
}



#include<stdio.h>
int main()
{
	int arr[10];//整型数组 - 存放整形的数组
	char ch[5];//字符数组 - 存放字符的数组
	//指针数组 - 存放指针的数组
	int* parr[5];//整形指针的数组
	return 0;
}
