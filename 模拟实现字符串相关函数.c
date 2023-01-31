//模拟实现字符串相关函数
//实现strcpy
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
void my_strcpy(char* dest, const char* src)
{
	assert(src != NULL);//断言
	assert(dest != NULL);//断言

	while (*dest++ = *src++)	//'\0'=0,既copy\0,又使得循环停止
	{
		;
	}
}
int main()
{
	char arr1[20] = "XXXXXXXXXX";
	char arr2[] = "hello";
	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}
