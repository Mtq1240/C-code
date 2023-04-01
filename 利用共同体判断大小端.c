//共用体(联合体)
int check()
{
	union
	{
		int i;
		char c;
	}u;
	 u.i = 1;
	//返回1是大端,返回 0 是小端
	return u.c;
}
#include<stdio.h>
int main()
{
	int i = check();
	if (i == 1)
	{
		printf("小端");
	}
	else
	{
		printf("大端");
	}
	return 0;
}
