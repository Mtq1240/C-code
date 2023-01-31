//模拟实现字符串相关函数
//实现strcpy:
//其实返回的是目标空间的起始地址
#include<stdio.h>
#include<assert.h>
//void my_strcpy(char* dest, char* src)
//{
//	while (*src!='\0')
//	{
//		*dest++=*src++;//hello的拷贝
//	}
//	*dest = *src;//\0的拷贝
//}
char* my_strcpy(char* dest, const char* src)
{
	assert(src != NULL);//断言
	assert(dest != NULL);//断言
	char* ret = dest;
	while (*dest++ = *src++)	//'\0'=0,既copy\0,又使得循环停止
	{
		;
	}
	return ret;//返回目标空间的起始地址
}

int main()
{
	char arr1[20] = "XXXXXXXXXX";
	char arr2[] = "hello";

	printf("%s\n", my_strcpy(arr1, arr2););
	return 0;
}


//const:
#include<stdio.h>
int main()
{
	//const 修饰变量,这个变量被称为常变量,不能被修改,但是本质上还是变量 
	const int num = 10;
	//num=20 //err

	const int* p = &num;
	//const修饰指针变量的时候:
	// comst 如果在*的左边,修饰的是*p,表示指针指向的内容,是不能通过指针来改变的,但是指针变量本身是可以修改的(p)
	// comst 如果在*的右边,修饰的是p,表示指针指针变量不能被改变,但是指针指向的内容可以改变(*p)
	// int *const p
	//*p = 20;


	// comst 如果在*的有边,修饰的是p,表示指针指针变量不能被改变,但是指针指向的内容可以改变
	printf("%d\n", num);
	return 0;
}
