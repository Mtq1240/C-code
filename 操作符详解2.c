#include<stdio.h>
//创建一个自定义类型
struct Book
{
	//结构体成员(变量)
	char name[20];
	char id[20];
	int price;
};
int main()
{
	//1.结构体变量名.成员名
	struct Book b = { "C语言","C231412",55 };
	struct Book * pb = &b;
	//2.结构体指针->成员名
	printf("%s\n", pb->name);
	printf("%s\n", pb->id);
	printf("%d\n", pb->price);
	  
	/*printf("%s\n", b.name);
	printf("%s\n", b.id);
	printf("%d\n", b.price);*/

	/*printf("%s\n", (*pb).name);
	printf("%s\n", (*pb).id);
	printf("%d\n", (*pb).price);*/
	return 0;
}
