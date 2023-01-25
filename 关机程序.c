#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	//关机
	//C 提供了一个函数:system()- 执行系统命令的

	char input[20] = {0}; //存放输入的信息
	system("shutdown -s -t 60");  //system引用头文件 stdlib.h
again:
	printf("请注意,你的电脑在 1分钟内关机,输入 : 我是猪 就取消关机\n");
	scanf("%s", input);  //数组名本来就是地址,所以不用再取地址.
	if (strcmp(input,"我是猪") == 0)	//两个字符串比较不能用==,应该使用 strcmp() 并引用头文件string.h
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}
