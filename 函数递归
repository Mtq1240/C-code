//函数的递归: 自己调用自己
//递归存在限制条件,当满足这个限制条件的时候,递归便不再继续
//每次递归调用之后越来越接近这个限制条件
//不能死递归,递归层次也不能太深,否则会栈溢出(Stack overflow)
//(内存:栈区,堆区,静态区)
//栈区:局部变量,函数的形参  堆区:动态内存分配(malloc/free calloc realloc )  静态区:全局变量,静态变量
void print(int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);
}

#include<stdio.h>
int main()
{
	unsigned int num = 0;
	scanf("%d", &num);
	print(num);  //print函数可以打印参数部分数字的每一位
	return 0;
}
