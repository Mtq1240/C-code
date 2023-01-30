//结构体初始化:
#include<stdio.h>
struct B
{
	char c;
	short s;
	double d;
};
struct stu
{
	struct B sb;
	char name[20];
	int age;
	char id[20];
}s1,s2;//s1,s2也是结构体变量,全局变量
int main()
{
	struct stu s = { {'w',20,3.14},"张三",30,"2034242"};//对象
	//.  ->
	//printf("%c\n", s.sb.c);
	//printf("%s", s.id);

	struct stu* ps = &s;
	printf("%c\n", (*ps).sb.c);
	printf("%c\n", ps->sb.c);
	return 0;
}



//结构体传参:
