数据在内存中以2进制的形式存储

对于整数来说:

整数二进制有3种表示形式1原码，反码，补码正整数:原码、反码，补码相同

负整数:原码反码、补码要进行计算的

按照数据的数值直接写出的二进制序列就是原码

原码的符号位不变，其他位按位取反，得到的就是反码反码+1,得到的就是补码


大端字节序:

把数据的低位字节序的内容存放在高地址处，高位字节序的内容存放在低地址处小端字节序:

小端字节序:

把数据的低位字节序的内容存放在低地址处，高位字节序的内容存放在高地址处




//请简述大小端字节的概念,设计一个小程序来判断当前机器的字节数
#include<stdio.h>
int check_sys()
{
	int a = 1;
	char* p = (char*)&a;//int*
	return *p;//返回1表示小端,返回0表示大端

	/*if (*p == 1)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}*/
}

int main()
{
	int ret=check_sys();
	if (ret == 1)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	return 0;
}


//练习
//1.
#include <stdio.h>
int main()
{
	char a = -1;//-1是整数,整型-1要放到char类型变量当中去
	//原:1000000000000000000000000000001
	//反:1111111111111111111111111111110
	//补:1111111111111111111111111111111
	//int要放到char中去,char是一个字节,所以只能存8个bit
	//a:11111111 
	//b:11111111
	//c:unsignd是无符号,所以11111111是无符号的数

	//%d打印整型要整型提升,看符号位
	//a:11111111111111111111111111111111,转换为原码就是-1
	//b:11111111111111111111111111111111,转换为原码就是-1
	//c:00000000000000000000000011111111,是无符号位整型提升要补0,转换为原码就是255
	signed char b = -1;

	unsigned char c = -1;

	printf("a=%d,b=%d,c=%d", a, b, c);//-1  -1 255

	return 0;

}




//补充:
//1.char 到底是signed char还是unsigned char?
//C语言无规定,取决于编译器
//int是 signed int
//short是 signed short


//2.
#include<stdio.h>
int main()
{
	char a = -128;
	//-128转换为补码为11111111111111111111111110000000
	//又因为是存放到char中,发生截断,为10000000
	//存放到%u无符号整型中,要发生整型提升,char是有符号char,所以提升为11111111111111111111111110000000
	//11111111111111111111111110000000,无符号数最高位就不是符号位
	//转换成十进制为4294967168
	printf("%u\n", a);
	return 0;
}


//3.
#include<stdio.h>
int main()
{
	char a = 128;
	//128转换为补码00000000000000000000000010000000 - 原反补相同
	//10000000放到char中
	//char是有符号位整型提升,高位补1
	//1111111111111111111111111000000
	////转换成十进制为4294967168
	printf("%u\n", a);
	return 0;
}


//char类型取值范围
//有符号char取值范围:-128~127

//4.
#include<stdio.h>
int main()
{
	int i = -20;
	//补码:11111111111111111111111111101100
	unsigned int j = 10;
	//补码:00000000000000000000000000001010
	printf("%d\n", i + j);//11111111111111111111111111110110(补码)
	//转换为原码 结果为-10
	return 0;
}



//5.
#include<stdio.h>
int main()
{
	unsigned int i;
	for (i = 9; i >= 0; i++)
	{
		printf("%u\n", i);//死循环,无符号不会产生负数
	}
	return 0;
}


//6.
#include<stdio.h>
int main()
{
	char a[1000];
	int i;
	for (i = 0; i < 1000; i++)
	{
		a[i] = -1 - i;
	}
	//-1,-2,-3...-127 -128 127 126 125...3 ,2 ,1,0,-1,-2...-127,-128,127...
	printf("%d\n", strlen(a));//找到\0-> 0  就是128+127=255
	return 0;
}


//7.
#include<stdio.h>
unsigned char i = 0;
int main()
{
	for (i = 0; i <= 255; i++)
	{
		printf("hello word\n");//死循环 
	}
	return 0;
}
