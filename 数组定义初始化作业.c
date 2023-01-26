#include<stdio.h>
int main()
{
	char str[] = "hello bit";
	//hello bit\0
	printf("%d %d\n", sizeof(str), strlen(str));//10 9
	//sizeof - 操作符-计算变量/类型所占内存大小,单位是字节
	//strlen - 函数-求字符串长度,找\0之前出现的字符个数
	return 0;
}




//实现函数init()初始化数组为0
//实现print()打印数组的每个元素
//实现reverse()函数完成数组元素的逆置
void init(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = 0;
	}
}
void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz ; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void reverse(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}

#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	print(arr, sz);
	reverse(arr, sz);
	print(arr,sz); 
	init(arr, sz);
	print(arr, sz);
	return 0;
}



//两个数组一样大,将A中的数组内容和B中的内容交换
#include<stdio.h>
int main()
{
	int arr1[] = { 1,3,5,7,9 };
	int arr2[] = { 2,4,6,8,10 };
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		int tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr1[i]);

	}
	printf("\n");
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr2[i]);

	}
	return 0;
}
