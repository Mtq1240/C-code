//打印100-200的素数
#include<stdio.h>
#include<math.h>
int main()
{
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		int j = 0;
		/*此循环里是判断2~i - 之间的数除以i, 看能否被整除
		整除==0不是素数,break跳出循环*/
															//m=a*b,a和b中一定至少有一个数字是<=开平方m的  12= 3*4 = 2*6 = 1*12 开平方得整形3
		for (j = 2; j <=sqrt(i); j++)						//判断101是否为素数,是用2到100之间的数字去试除
		{													/*现在用2~sqrt(101)之间的数字去试除就行, 假设101是素数, 
															  它在2~sqrt(101)之间一定有一个因子能够整除101*/
			
			if (i % j == 0)	
			{
				break;
			}
		}
		if (i == j)
		{
			printf("%d ", i);
		}
	}
	
	return 0;
}

//写一个猜数字游戏
//1.会自动产生一个一到一百之间的随机数
//2.猜数字
//  a. 猜对了,恭喜你!游戏结束
//  b.猜错了 会告诉猜大了还是猜小了,继续猜,直到猜对
//3.游戏可以一直玩,除非退出游戏
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void menu()
{
	printf("***********************\n");
	printf("***** 1. 开始游戏 *****\n");
	printf("***** 0. 退出游戏 *****\n");
}

void game()
{
	//猜数字游戏的实现
	//1.生成随机数: 运用库函数 rand 要引用头文件<stdlib.h>
	// rand函数调用的随机数范围在0~32767(7FFF)之间,但是生成的随机数是固定的顺序,需要在 rand 函数前
	// 调用库函数 srand 来设置随机数的生成器
	//2.猜数字

	//srand函数--设置一个随机的起点   要传入一个一直要发生变化的值,调用库函数 time() 并引用头文件<time.h>
	//time函数返回类型是 long 型,而 srand 需要的是一个 unsigned int 型,srand 调用 time 不同类型要强制转换
	//srand 函数要放在主函数体内才能只调用一次
	int ret = rand()%100+1; ;     //%100的余数是 0~99,然后+1,范围就是1--100之间猜数字(余数永远比被除数小) 比如99%100=99 +1
	//printf("%d\n",ret);

	//2.猜数字
	int guess = 0;
	while (1)
	{
		printf("请猜数字:");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了\n");
		}
		else if (guess < ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你猜对了!\n");
			break;
		}
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	
	do
	{
		menu();      //打印菜单
		printf("请选择:->");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏.\n");
			break;
		default:
			printf("请重新选择!\n");
			break;
		}
	} while (input);  //0为假退出,1为真,继续循环
	return 0;
}
