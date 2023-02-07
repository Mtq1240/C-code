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
