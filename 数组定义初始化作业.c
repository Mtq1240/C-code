#include<stdio.h>
int main()
{
	char str[] = "hello bit";
	//hello bit\0
	printf("%d %d\n", sizeof(str), strlen(str));//10 9
	//sizeof - 操作符-计算变量/类型所占内存大小,单位是字节
	//strlen - 函数-求字符串长度,找\0之前出现的字符个数
	return 0;
}
