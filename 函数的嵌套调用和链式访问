//函数的嵌套调用和链式访问
void test3()
{
	printf("hehe\n");
}

int test2()
{
	test3();
	return 0;
}

int main()
{
	test2();
	return 0;
}




//链式访问: 把一个函数的返回值作为另一个函数的参数
//printf:是打印在屏幕上字符的个数
#include<stdio.h>
int main()
{
	printf("%d", printf("%d", printf("%d", 43)));//打印结果4321  43 2 1
	return 0;
}



//函数:
#include<stdio.h>
int main()
{
	int a = 10;
	int b = 20;
	//函数的声明:-告知编译器有一个函数叫什么,参数是什么,返回类型是什么
	//函数的声明出现在函数的使用之前,要满足先声明后使用
	//函数的声明一般要放在头文件中的
	int Add(int, int);

	int c = Add(a, b);
	printf("%d\n", c);
	return 0;
}

//函数的定义 放在下面编译器识别不到,一般要在头文件中声明一下函数
//头文件: .h
// 静态库:右击项目名称-属性-常规-配置类型-应用程序改成静态库
//导入静态库:  eg:#pragma comment(lib,"sub.lib")
int Add(int x, int y)
{
	return x + y;
}
