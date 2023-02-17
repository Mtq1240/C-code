//1.
//声明一个指向含有10个元素的数组的指针，
//其中每个元素是一个函数指针，该函数的返回值是int，参数是int* ，正确的是（  C ）
A.    (int* p[10])(int*)

B.    int[10] * p(int*)

C.    int (*(*p)[10])(int*)

D.    int((int*)[10])* p


//2.
//定义一个函数指针，指向的函数有两个int形参并且返回一个函数指针，返回的指针指向一个有一个int形参且返回int的函数？下面哪个是正确的？（ A  ）
A.    int (*(*F)(int, int))(int)

B.    int (*F)(int, int)

C.    int (*(*F)(int, int))

D.    *(*F)(int, int)(int)

//3.
//在游戏设计中，经常会根据不同的游戏状态调用不同的函数，我们可以通过函数指针来实现这一功能，下面哪个是：一个参数为int *，返回值为int的函数指针（B ）
A.    int (*fun)(int)

B.    int (*fun)(int *)

C.    int* fun(int *)

D.    int* (*fun)(int *)

//4.
//下面哪个是函数指针？( C  )
A.    int* fun(int a, int b);

B.    int(*)fun(int a, int b);

C.    int (*fun)(int a, int b);

D.    (int *)fun(int a, int n);

//5.
//下面哪个代码是错误的( D )
#include<stdio.h>
int main()
{
	int* p = NULL;
	int arr[10] = { 0 };
	return 0;
}

A.p = arr;

B.int(*ptr)[10] = &arr;

C.p = &arr[0];

D.p = &arr;


//6.
//下面代码关于数组名描述不正确的是( A )
#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	return 0;
}

A.数组名arr和& arr是一样的;

B.sizeof(arr), arr表示整个数组;

C.&arr, arr表示整个数组;

D.除了sizeof(arr)和&arr中的数组名, 其他地方出现的数组名arr, 都是数组首元素的地址;


//7.
//如何定义一个int类型的指针数组,数组元素个数为 10个( C )
A.int a[10];

B.int(*a)[10];

C.int* a[10];

D.int(*a[10](int));


//8.
//杨氏矩阵
//有一个数字矩阵，矩阵的每行从左到右是递增的, 矩阵从上到下是递增的
//请编写程序在这样的矩阵中查找某个数字是否存在。
//要求 : 时间复杂度小于o(N);
//1 2 3
//4 5 6
//7 8 9
#include<stdio.h>
int find(int arr[3][3], int r, int c, int k)
{
	int x = 0;
	int y = c - 1;

	while (x < r && y >= 0)
	{
		if (arr[x][y] < k) //从arr[0][2] 开始
		{
			x++;
		}
		else if (arr[x][y] > k)
		{
			y--;
		}
		else
		{
			return 1; //找到了
		}
	}
	return 0; //找不到
}
int main()
{
	int arr[9] = { 1,2,3,4,5,6,7,8,9 };
	int k = 7;
	int ret = find(arr, 3, 3, k);
	if (ret == 1)
	{
		printf("找到了");
	}
	else
	{
		printf("找不到");
	}
	return 0;
}


//2.
#include<stdio.h>
int find(int arr[3][3], int *px, int*py , int k)
{
	int x = 0;
	int y = *py - 1;

	while (x < *px && y >= 0)
	{
		if (arr[x][y] < k) //从arr[0][2] 开始
		{
			x++;
		}
		else if (arr[x][y] > k)
		{
			y--;
		}
		else
		{
			*px = x;
			*py = y;
			return 1; //找到了
		}
	}
	return 0; //找不到
}
int main()
{
	int arr[9] = { 1,2,3,4,5,6,7,8,9 };
	int k = 7;
	int x = 3;
	int y = 3;
	//&x,&y
	//1.传入参数
	//2.带回值


	int ret = find(arr, &x, &y, k);
	if (ret == 1)
	{
		printf("找到了\n");
		printf("下标为%d %d", x, y);
	}
	else
	{
		printf("找不到");
	}
	return 0;
}
