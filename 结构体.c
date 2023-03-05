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
