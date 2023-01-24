#define _CRT_SECURE_NO_WARNINGS 1


//交换两个数,不允许使用第三个变量

#include<stdio.h>
int main()
{
	int a = 3;
	int b = 5;
	printf("a=%d b=%d\n", a, b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("a=%d b=%d", a, b);
	return 0;
}