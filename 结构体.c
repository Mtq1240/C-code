//自定义类型
//1.结构的自引用:
//不是包含同类型的结构体变量,而是包含同类型的结构体指针
struct Node
{
	int date;
	struct Node* next; 
};



//2.结构体变量的定义和初始化
struct S
{
	char c;
	int i;
}s1,s2;

struct B
{
	double d;
	struct S s;
	char c;
};
int main()
{
	struct B sb = { 3.14,{'w',100},'q' };

	printf("%lf %c %d %c\n", sb.d, sb.s.c, sb.s.i, sb.c);
	return 0;
}



struct S
{
	char c1;
	int i;
	char c2;
};
#include<stdio.h>
int main()
{
	struct S s = { 0 };
	printf("%d\n", sizeof(s));//12

	return 0;
}

//如何计算结构体大小?首先得掌握结构体的对齐规则:
//1.第一个成员在与结构体变量偏移量为 0 的地址处;
//2.其他成员变量要对齐到某个数字(对齐数)的整数倍的地址处;
//对齐数 = 编译器默认的一个对齐数 与 该成员大小的 较小值.
//vs 默认的值为 8 .
//3.结构体总大小为对齐数(每个成员变量都有一个对齐数)的整数倍;
//4.如果嵌套了结构体的情况,嵌套的结构体对齐到自己的最大对齐数的整数倍处,结构体的真题大小就是所有最大对齐数(含嵌套结构体的对齐数)的整数倍
#include<stdio.h>
struct s1
{
	double d;
	char c;
	int i;
};
struct s2
{
	char c1;
	struct s1 s1;
	double b;
};
int main()
{
	struct s1 s1 = { 0 };
	struct s2 s2 = { 0 };
	printf("%d\n", sizeof(struct s2));//32 1+7+16+8

}


//为什么存在内存对齐?
//1.平台原因:不是所有的硬件平台都能访问任意地址上的任意数据的,某些硬件平台只能在某些地址处取特定的类型数据,否则抛出硬件异常
//2.性能原因:数据结构(尤其是栈)应该尽可能地在自然边界上对齐,原因在于:为了访问未对齐的内存,处理器需要作两次内存访问,而对其的内存访问仅需要一次访问
//总体来说:结构体内存对齐时拿空间来换取时间的做法.
