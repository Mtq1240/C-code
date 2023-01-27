//指针类型的意义
//1.指针类型决定了:指针解引用的权限有多大
//2.指针类型决定了指针走一步,能走多远(步长)
//
#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	int* p = arr;
	char* pc = arr;
	printf("%p\n", p);
	printf("%p\n", p+1);//加了四个字节

	printf("%p\n", pc);
	printf("%p\n", pc+1);//加了一个字节

	return 0;
}
