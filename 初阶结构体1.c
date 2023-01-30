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
};
void print1(struct stu t)
{
	printf("%c %d %lf %s %d %s\n", t.sb.c, t.sb.s, t.sb.d, t.name, t.age, t.id);
}

void print2(struct stu* ps)
{
	printf("%c %d %lf %s %d %s\n", ps->sb.c, ps->sb.s, ps->sb.d, ps->name, ps->age, ps->id);
}

int main()
{
	struct stu s = { {'w',20,3.14},"张三",30,"2034242" };//对象
	print1(s);	//传值调用
	print2(&s);	//传址调用(效率更高)
	
	return 0;
}
