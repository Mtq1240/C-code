//数组和指针
#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
	printf("%p\n", arr);
	printf("%p\n", &arr[0]);
	return 0;
}


#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
	int* p = arr;
	printf("%d\n", arr[2]);
	printf("%d\n", p[2]);
	
	//[] 是一个操作符 2和arr是两个操作数
	//a+b
	//b+a
	printf("%d\n", 2[arr]);
	printf("%d\n", arr[2]);

	//arr[2] -->*(arr+2) -->*(2+arr)

	//arr[2]<==>*(arr+2)<==>*(p+2)<==>*(2+p)<==>*(2+arr)==2[arr]
	//2[arr]<==>*(2+arr)
	return 0;
}
