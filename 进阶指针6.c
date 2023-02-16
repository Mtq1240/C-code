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


//3.
int main()
{
	int a[4] = { 1,2,3,4 };
	int* ptr1 = (int*)(&a + 1);//4  &a+1跳过整个数组,将数组后面的地址强制转换成int型指针放到指针变量ptr1中
	int* ptr2 = (int*)((int)a + 1);
	printf("%x,%x", ptr1[-1], *ptr2);//4  2000000  *(ptr1+(-1)),ptr1已经指向数组后面的地址,因为是整形指针,-1就向前四个字节
								     //04 00 00 00,也就是 4 
									 //a是首元素的地址将他转换为整型就是01 00 00 00给它+1就是向后1个字节,变成00 00 00...
								     //如果再将它转换为整型指针解引用就是从 00向后再访问 4 个字节就是00 00 00 02(小端存储)
	return 0;
}



//4.
#include<stdio.h>
int main()
{
	int a[3][2] = { (0,1),(2,3),(4,5) };//1 3   5 0   00
	int* p;
	p = a[0];
	printf("%d", p[0]);//  1   逗号表达式 p[0]=*(p+0)
	return 0;
}



//5.
#include<stdio.h>
int main()
{
	int a[5][5];
	int(*p)[4];
	p = a;
	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);//FFFFFFFC -4 
	
	return 0;
}


//6.
#include<stdio.h>
int main()
{
	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
	int* ptr1 = (int*)(&aa + 1);
	int* ptr2 = (int*)(*(aa + 1));
	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));//10  5
	return 0;
}
