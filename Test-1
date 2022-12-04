#include<stdio.h>
#include<string.h>//库函数
struct Book			//	创建一个结构体类型		
{
	char name[30];//数组,代表存放的元素个数,大小
	short price;
};
int main() 
{
	struct Book b1 = { "c语言程序设计",55 };//利用结构体类型--创建一个该类型的结构体变量.
	strcpy(b1.name, "Java++");
	printf("书名改为:%s\n", b1.name);			/*修改了结构体的书名, 运用strcpy - string copy - 字符串拷贝
												库函数-string.h*/
	//struct Book*p = &b1;

		//printf("%s\n", p->name);
		//printf("%d\n", p->price);

	//printf("书名为:%s\n", (*p).name);
	//printf("价格为:%d\n", (*p).price);
	/*printf("书名为:%s\n",b1.name);
	printf("价格为%d\n", b1.price);

	b1.price = 15;
	printf("修改后价格为%d\n", b1.price);

	struct Book b2 = { "Java学习",56 };
	printf("书名为:%s\n", b2.name);
	printf("价格为%d\n", b2.price);*/
	return 0;
}
