#include<stdio.h>
int main()
{
	int a[5] = { 1,2,3,4,5 };
	int* ptr = (int*)(&a + 1);
	printf("%d,%d", *(a + 1), *(ptr - 1));//2 5, a是受元素地址,a+1解引用就是第二个元素,
										  //&a是整个数组的地址+1跳过整个数组指向数组后面的地址给它交给指针变量
										  //ptr-1是数组后面的地址-1解引用就得到5
	return 0;
}


//2.已知结构体大小是20字节
struct Test
{
	int Num;
	short sDate;
	char cha[2];
	short sBa[4];
}*p;
//假设p 的值为0x100000.如下表达式的值分别为多少?
//已知,结构体Test类型的变量大小是20个字节

int main()
{
	printf("%p\n", p + 0x1);// 0x100014  结构体20个字节,+1就是+20个字节,要化为16进制也就是14
	printf("%p\n", (unsigned long)p + 0x1);// 0x100001  p是结构体类型大小转换为长整型类型大小,也就是整型+1
	printf("%p\n", (unsigned int*)p + 0x1);// 0x100004  无符号整型指针+1跳过一个整形指针变量,+4个字节
	return 0;
	//考察的是:指针类型决定了指针的运算
}
