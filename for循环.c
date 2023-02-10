1.

#include<stdio.h>
int main()
{
	for (;;)				            	//1.for循环的初始化,调整,判断都可以省略
									                  //但是判断条件就是  恒为真
	{
		printf("hehe\n");			
	}
	return 0;
}




2.for的变种 1

include<stdio.h>
int main()

{
	int i = 0;
	int j = 0;
	
	for (; i < 10; i++)
	{
		for (; j < 10; j++)				            //j循环了10次后j的值就为10,再次进入循环不满足j<10,故只打印十次hehe
		{
			printf("hehe\n");
		}
	}
	return 0;
}



3.for的变种 2
#include<stdio.h>
int main()
{
	int x, y;
	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)			            //输出两个hehe,两个判断条件要同时满足
	{
		printf("hehe\n");
	}
	return 0;
}
