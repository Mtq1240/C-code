//qsort库函数:
//void qsort(void*base, //base存放待排序数据中第一个对象的地址
//size_t num,           //排序数据元素的个数
//size_t size,          //排序数据中一个元素的大小,单位是字节
//int(*cmp)(const void*e1,const void*e2)  //用来比较待排序数据中的2个元素的函数


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void print_arr(int* arr, int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%d ",arr[i]);
	}
}

int cmp_int(const void*e1,const void*e2)
{
	return*(int*)e1 - *(int*)e2;
}

struct stu
{
	char name[20];
	int  age;
};
int sort_by_age(const void*e1,const void*e2)
{
	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
}
int sort_by_name(const void*e1,const void* e2)
{
	return strcmp(((struct stu*)e1)->name, ((struct stu*)e1)->name);
}

void test1()
{
	int arr[10] = {1,2,3,4};
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	print_arr(arr, sz);
}

void test2()
{
	//用qsort排序结构体数据
	struct stu s[3] = { {"zhangsan",30},{"lisi",34},{"wangwu",20} };
	int sz = sizeof(s) / sizeof(s[0]);
	//按照年龄来排序
	//qsort(s, sz, sizeof(s[0]), sort_by_age);
	//按照名字来排序
	qsort(s, sz, sizeof(s[0]), sort_by_name);
}
int main()
{
	//test1();
	test2();
	return 0;
}
