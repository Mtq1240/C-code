//在屏幕上打印杨辉三角。
//1
//1 1
//1 2  1
//1 3  3  1
//1 4  6  4  1
//1 5 10 10  5 1
//……
#include<stdio.h>
int main()
{
	int arr[10][10] = { 0 };

	int i = 0;
	for (i = 0; i < 10; i++)
	{
		int j = 0;
		for (j = 0; j <= i; j++)
		{
			//让第一列都为1
			if (j == 0)
			{ 
				arr[i][j] = 1;
			}
			//让对角线都为1
			if (i == j)
			{
				arr[i][j] = 1;
			}
			//计算里面的数
			if (i >= 2 && j >= 1)
			{
				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
			}
		}
	}
	for (i = 0; i < 10; i++)
	{
		int j = 0;
		for (j = 0; j <= i; j++)
		{
			printf("%d", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
