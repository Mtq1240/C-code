//函数的递归
//模拟实现一个strlen函数
int my_strlen(char* str)
{
	if (*str != '\0')
	{
		return 1 + my_strlen(str + 1);
	}
	else
		return 0;
}
#include<stdio.h>
int main()
{
	char arr[] = "Bit";
	printf("%d\n", my_strlen(arr));

	return 0;
}



//递归与迭代
//计算n的阶乘 :n<=1 n!=1  ;  n>=1 n!=n*Fac(n-1)

int Fac(int n)
{
	if (n <= 1)
		return 1;
	else
		return n * Fac(n - 1);
	
}
#include<stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Fac(n);
	printf("%d\n", ret);
	return 0;
}




//求第n个斐波那契数(不考虑溢出)
//1.效率太低-重复大量的计算!
int count = 0;
int Fib(int n)
{
	//统计第3个斐波那契数的计算次数
	if (n == 3)
	count++;
	if (n <= 2)
		return 1;
	else
		return Fib(n - 1) + Fib(n - 2);
}
#include<stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret =Fib(n);
	printf("%d\n", ret);
	printf("count=%d", count);
	return 0;
}
