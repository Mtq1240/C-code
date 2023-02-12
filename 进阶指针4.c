//模仿qsort实现一个冒泡排序的通用算法
#include <stdio.h>
void print_arr(int* arr, int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
void swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}
void bubble_sort(void* base, int sz, int width, int(*cmp)(const void* e1, const void* e2))
{
	int i = 0;
	//趟数
	for (i = 0; i < sz - 1; i++)
	{
		//一趟的排序
		int j = 0;
		for (j = 0; j < sz - 1; j++)
		{
			//两元素比较
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				//交换
				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}
int cmp_int(const void* e1, const void* e2)
{
	return*(int*)e1 - *(int*)e2;
}
void test3()
{
	int arr[] = {1,3,5,7,9,2,4,6,8,0};
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
	print_arr(arr, sz);
}

int main()
{
	test3();
	return 0;
}
