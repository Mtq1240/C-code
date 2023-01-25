#include<stdio.h>
void test1(int arr[])
{
					//int*arr
	printf("%d\n", sizeof(arr));// 4/8	数组的本质是指针,指向的是首元素的地址,指针大小不论类型
}
void test2(char ch[])
{
					//char*ch
	printf("%d\n", sizeof(ch));// 4/8
}
int main()
{
	int arr[10] = { 0 };
	char ch[10] = { 0 };
	printf("%d\n", sizeof(arr));//40
	printf("%d\n", sizeof(arr));//10
	test1(arr);
	test2(ch);
	return 0;
}



#include<stdio.h>
int main()
{
	int a = 10;
	printf("%p\n", &a);	//& - 取地址操作符
	int* pa = &a;	//pa是用来存放地址的 - pa就是一个指针变量
	*pa = 20;	// - 解引用操作符 - 间接访问操作符
	printf("%d\n", a);//20
	return 0;
}




//360面试题
#include<stdio.h>
int main()
{
	int i = 0, a = 0, b = 2, c = 3, d = 4;
	i = a++ && ++b && d++;
	//i=a++&&++b&&d++;
	printf("a=%d\n b=%d\n c=%d\nd=%d\n", a, b, c, d);//a++先使用再加加,a=0  0&&....前面为假后面不参与计算
                                                   //&&遇0短路,||遇真短路
	return 0;
}




#include<stdio.h>
int main()
{
	int a = 3;
	int b = 0;
	//三目操作符
	b = (a > 5 ? 1 : -1);
	return 0;
}



#include<stdio.h>
int main()
{
	int a = 3;
	int b = 5;
	int c = 0;
	//逗号表达式 - 要从左向右依次计算,但是整个表达式的结果是最后一个表达式结果
	int d = (c = 5, a = c + 3, b = a - 4, c += 5);
	printf("%d\n", d);//10
	return 0;
}
