//模拟用户登录,并且只能登录三次,三次均错误退出程序
#include<stdio.h>
#include<string.h>
int main()
{
	int i = 0;
	char password[20] = { 0 };

	for (i = 0; i < 3; i++)
	{
		printf("请输入密码-->:");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)			// == 不能用来判断两个字符串是否相等,使用一个库函数-strcmp
		{
			printf("密码正确\n");
			break;
		}
		else
		{
			printf("输入错误请重新输入.");
		}
	}
	
	if (i == 3)
		printf("三次密码均错误,退出程序.");
	return 0;
}
