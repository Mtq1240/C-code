//野指针:指针指向的位置是不可知的
#include<stdio.h>
int main()
{
	//1.指针未初始化
	//p就是个野指针
	int* p;//p是一个局部的指针变量,局部变量不初始化的话,默认是随机值
	*p = 20;//非法访问内存了
	return 0;
}

#include<stdio.h>
int main()
{
	//2.越界访问
	int arr[10] = { 0 };
	int* p = arr;
	int i = 0;
	for (i = 0; i <= 10; i++)
	{
		*p = i;
		p++;
	}
	return 0;
}

//3.指针指向的空间释放
#include<stdio.h>
test()
{
	int a = 10;
	return &a;
}

int main()
{
	int *p=test();
	*p = 20;
	return 0;
}



#include<stdio.h>
int main()
{
	//当前不知道p应该初始化为声明地址时,直接初始化为NULL
	//int* p = NULL;
	//明确知道初始化的值 
	int a = 10;
	int* prt = &a;

	//C语言本身是不会检查数据的越界行为的
	return 0;
}
//避免野指针
//1.指针初始化
//2.小心指针越界
//3.指针指向空间释放及时置NULL
//3.指针使用之前检查有效性


