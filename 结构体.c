//自定义类型
//1.结构的自引用:
//不是包含同类型的结构体变量,而是包含同类型的结构体指针
struct Node
{
	int date;
	struct Node* next; 
};



//2.结构体变量的定义和初始化
struct S
{
	char c;
	int i;
}s1,s2;

struct B
{
	double d;
	struct S s;
	char c;
};
int main()
{
	struct B sb = { 3.14,{'w',100},'q' };

	printf("%lf %c %d %c\n", sb.d, sb.s.c, sb.s.i, sb.c);
	return 0;
}
