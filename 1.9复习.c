//求两个数中的最大公约数
#include<stdio.h>
int main()
{
	int m = 0;
	int n = 0;
	int max = 0;
	scanf("%d%d",&m,&n);
	if (m > n)
	{
		max = n;
	}
	else
	{
		max = m;
	}
	while (1)
	{
		if (m % max == 0 && n % max == 0)
		{
			printf("最大公约数是 %d\n", max);
			break;
		}
		max--;
	}
	
	return 0;
}




//2.最大公约数,最小公倍数
#include<stdio.h>
int main()
{
	int m = 0;
	int n = 0;
	int t = 0;
	int a = 0;
	scanf("%d%d",&m,&n);
	a = m * n;
	while (t=m%n)//m%n为0不进入,不为0进入循环
	{
		//辗转相除法:m%n=0,则n为最大公约数
		t = m % n;
		m = n;
		n = t;
	}
	printf("最大公约数是%d\n", n);
	a = a / n;		//最小公倍数=两数相乘/最大公约数
	printf("最小公倍数是%d",a);
	
	return 0;
}
