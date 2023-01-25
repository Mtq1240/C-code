//冒泡排序
void bubble_sort(int arr[], int sz)
{	//确定趟数
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{	//一趟冒泡排序的过程
		int j = 0;
		int flag = 1;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				//交换
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				flag = 0;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}
#include<stdio.h>
int main()
{
	int arr[] = { 7,4,2,9,3 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);//数组传参的是首元素地址
	bubble_sort(arr,sz);
	for (i = 0; i < sz - 1; i++)
	{
		printf(" %d", arr[i]);
	}
	return 0;
}



//数组名是什么?
//数组名是数组首元素的地址
//但是有两个例外
//1.sizeof(数组名) - 数组名表示整个数组 - 计算的是整个数组的大小,单位是字节
//2.&数组名 - 数组名表示整个数组 - 取出的是整个数组的地址
