//自定义类型
//1.结构的自引用:
//不是包含同类型的结构体变量,而是包含同类型的结构体指针
struct Node
{
	int date;
	struct Node* next; 
};
