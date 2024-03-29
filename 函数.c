#include<stdio.h>
void Swap(int* pa, int* pb)     //*p读取到a和b的地址,改变变量的地址要运用指针,外部和内部函数的地址不一样会发生改变
{
	int z = 0;
	z = *pa;
	*pa = *pb;
	*pb = z;

}
int main()
{
	int a = 10;
	int b = 20;
	printf("交换前 a=%d ,b=%d \n", a, b);
	Swap(&a, &b);    //取地址a和b,运用指针变量
	printf("交换后 a=%d ,b=%d \n",a,b);
	return 0;




//2.函数打印100~200之间的素数
int is_prime(t)
{
	int n = 0;
	for (n = 2; n < t; n++)
	{				//2~n-1之间的数字试除i
		if (t%n==0)
		{
			return 0;
		}
		return 1;
	}
}
#include<stdio.h>
int main()
{
				//100~200之间的素数
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
				//判断i是否为素数
		if (is_prime(i) == 1)
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\ncount=%d\n", count);
	return 0;
}





//3.函数判断闰年
#include<stdio.h>
//如果是闰年返回1,不是返回0
int is_leap_year(int i)			//一个函数不写返回类型,默认返回int类型
{
	return  ((i % 4 == 0 && i % 100 != 0 )|| (i % 400 == 0));
}
int main()
{
	int y = 0;
	int count = 0;
	for (y=1000;y<=2000;y++)
	{
		if (is_leap_year(y)==1)
		{
			count++;
			printf("%d ", y);
		}
	}
	printf("\ncount=%d\n", count);
	return 0;
}






//4.实现一个整形有序数组的二分查找

int binary_search(int a[], int k, int s)		//int binary_search(int *a,int k)
{							//首元素的地址不需要为a[]开辟大小
	int left = 0;
	int right = s - 1;
	
	while (left <= right)
	{
		int mid = (left + right) / 2;		//计算数组个数一定要在主函数内部计算,再以参数的形式传进创建的函数中
		if (a[mid] > k)
		{
			right = mid - 1;		//mid指向的元素比k大,查找范围要缩小,mid要减一
		}
		else if (a[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;  //找不到的情况
}
#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int key = 17;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//找到了就返回找到位置的下标,
	//找不到返回-1
	int ret = binary_search(arr, key, sz);			//数组arr传参,实际传递的不是数组的本身
								//仅仅传过去了数组首元素的地址即指针
	if (-1 == ret)
	{
		printf("没有找到\n");
	}
	else
	{
		printf("找到了,下标是%d\n",ret);
	}
	return 0;
}





//写一个函数,每调用一次这个函数,就会将num的的值增加1
void Add(int* ps)  	//收到地址
{
	(*ps)++;
}
#include<stdio.h>
int main()
{
	int sum = 0;
	Add(&sum);	//改变值运用指针变量取地址
	printf("%d", sum);

	Add(&sum);
	printf("%d", sum);

	Add(&sum);
	printf("%d", sum);
	return 0;
}



//函数打印乘法口诀表
void print_table(int n)
{
	int i = 0;
	for (i = 1; i <= n; i++)
	{
		//打印一行
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-2d ", i, j, i * j);
		}
		printf("\n");
	}
}


#include<stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	print_table(n);
	return 0;
}

