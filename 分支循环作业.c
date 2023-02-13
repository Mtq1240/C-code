1.从大到小输出
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d%d%d", &a, &b, &c);
	if (a<b)
	{
		int temp = a;
		a = b;
		b = temp;
	}
	if (a < c)
	{
		int temp = a;
		a = c;
		c = temp;
	}
	if (b < c)
	{
		int temp = b;
		b = c;
		c = temp;
	}
	printf("%d %d %d", a, b, c);

}

2.辗转相除法求两个数最大公约数
//辗转相除法
#include<stdio.h>
int main()
{
	int m = 0;
	int n = 0;
	int r = 0;
	printf("请输入两个数求出最大公约数;");
	scanf("%d%d", &m, &n);
	while (r=m%n)
	{
		
		m = n;
		n = r;
	}
	printf("最大公约数为:%d\n", n);
	return 0;
}

3.打印1000到2000年之间的闰年
#include<stdio.h>
int main()
{
	int year=0 ;
	int count = 0;
	for (year = 1000; year <= 2000; year++)
	{
		if (year % 4 == 0 && year % 100 != 0)
		{
			printf("%d是闰年", year);
			count++;
		}
		else if (year % 400 == 0)
		{
			printf("%d是闰年", year);
			count++;
		}
	}
	printf("/ncount=%d\n",count);
	return 0;
}

4.打印素数
#include<stdio.h>
#include<math.h>
int main()
{
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		//1和他本身整除,试除法
		int j = 0;
		for (j = 2; j <=sqrt(i); j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (j>sqrt(i))
		{
			count++;
			printf("%d是素数  ", i);
		}
	}
	printf("\ncount=%d\n", count);
	return 0;
}
