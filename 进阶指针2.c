//数组名!=&数组名函教名==&函数名

#include<stdio.h>
int Add(int x, int y)
{
	return x + y;
}
int main()
{
	// pf就是一个函数指针变量
	//int (*pf)(int,int)=&Add;

	int (*pf)(int, int) = Add;//Add==pf
	int ret = (*pf)(3, 5);
	//int ret = pf(3, 5);

	//int ret = Add(3,5)

	printf("%d\n", ret);
	return 0;
}


//------------------------------------------------------------------------------------
//读代码:
#include<stdio.h>
int main()
{
	(*(void(*)())0)();
	//调用0地址处的函数
	//该函数无参，返回类型是void
	//1. void(*)()-函数指针类型
	//2. (void(*)())0-对0进行强制类型转换，被解释为一个函数地址
	//3.*(void(*)()0-对0地址进行了解引用操作
	//4．(*(void(*)())0)()-调用0地址处的函数
    //<C陷阱和缺陷>
	return 0;
}

//------------------------------------------------------------------------------------

#include<stdio.h>
int main()
{
	//1:
	void (*signal(int, void(*) (int))) (int);
	//typedef -对类型进行重定义
	

	//2:
	typedef void(*pfun_t)(int);//对void(*)(int)的函数指针类型重命名为pfun_t
	pfun_t signal(int, pfun_t);

	    //1. signal和()先结合，说明signal是函数名
		//2. signal函数的第一个参数的类型是int,第二个参数的类型是函数指针
		//该函数指针，指向一个参数为int,返回类型是void的函数
		//3. signal函数的返回类型也是一个函数指针
		//该函数指针，指向一个参数为int,返回类型是void的函数
		//signal是一个函数的声明
	return 0;
}

//------------------------------------------------------------------------------------
//函数指针数组 - 存放函数指针的数组

#include<stdio.h>
int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}
int main()
{
	int (*p1)(int, int) = Add;
	int (*p2)(int, int) = Sub;
	int(*pArr[2])(int, int) = { Add,Sub };//pArr就是函数指针数组

	return 0;
}



//------------------------------------------------------------------------------------
//计算器
int add(int x, int y)
{
	return x + y;
}

int sub(int x, int y)
{
	return x - y;
}

int mul(int x, int y)
{
	return x * y;
}

int div(int x, int y)
{
	return x / y;
}

void menu()
{
	printf("************************\n");
	printf("**** 1. add  2. sub ****\n");
	printf("**** 3. mul  4. div ****\n");
	printf("*******  0. exit *******\n");
	printf("************************\n");
}

#include<stdio.h>
int main()
{
	//计算器-计算整型变量的加、减、乘、除
	int input = 0;
	do
	{
		int(*pfArr[5])(int, int) = { NULL,add,sub,mul,div };
		menu();
		int x = 0;
		int y = 0;
		printf("请选择:\n");
		scanf("%d", &input);
		if (input >= 1 && input <= 4)
		{
			printf("请输入两个数:\n");
			scanf("%d %d", &x, &y);
			int ret = (pfArr[input])(x, y);
			printf("%d\n", ret);
		}
		else if (input == 0)
		{
			printf("退出程序\n");
			break;
		}
		else
		{
			printf("重新输入\n");
		}
	} while (input);
	return 0;
}

