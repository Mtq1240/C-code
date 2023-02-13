int main()
{
	//sizeof(数组名) - 数组名表示整个数组的 - -计算的是整个数组的大小
	//&数组名 - 数组名表示整个数组,取出的是整个数组的地址
	//除此之外,所有的数组名都是数组首元素的地址

	int a[] = { 1,2,3,4 };
	printf("%d\n", sizeof(a));//16
	printf("%d\n", sizeof(a + 0));// 4/8   a+0是第一个元素的地址,sizeof(a + 0)计算的是地址大小
	printf("%d\n", sizeof(*a));//4  *a是数组的第一个元素,sizeof(*a)计算的是第一个元素的大小
	printf("%d\n", sizeof(a + 1));// 4/8   a + 1是第二个元素的地址, sizeof(a + 1)计算的地址的大小
	printf("%d\n", sizeof(a[1]));// 4  计算的是第二个元素的大小
	//要和指针联想:
	printf("%d\n", sizeof(&a));// 4/8  &a虽然是数组的地址,但是也是地址 , sizeof(&a)计算的是一个地址的大小
	printf("%d\n", sizeof(*&a));// 16 &a--int(*p) [4]=&a; 相当于一个整形指针解引用就能找到一个整型
	//,字符指针解引用就能找到一个字符,那数组指针解引用就能找到一个数组
	printf("%d\n", sizeof(&a + 1));// 4/8 &a是取出整个数组的地址,再+1跳到下一个数组的首地址(数组后面空间的地址)
	printf("%d\n", sizeof(&a[0]));// 4/8 第一个元素的地址
	printf("%d\n", sizeof(&a[0] + 1));// 4/8 第一个元素地址+1的地址

	//字符数组
	char arr[] = { 'a','b','c','d','e','f' };
	printf("%d\n", sizeof(arr));//6  计算数组总大小
	printf("%d\n", sizeof(arr+0));// 4/8  所占的空间是一个字节,但是字符的地址也是地址
	printf("%d\n", sizeof(*arr)); // 1 数组名首元素地址,解引用1个字节
	printf("%d\n", sizeof(arr[1]));//1  b的大小1个字节
	printf("%d\n", sizeof(&arr));//4/8  数组的地址 4/8个字节
	printf("%d\n", sizeof(&arr+1));//4/8整个数组的地址+1跳到数组后面的地址
	printf("%d\n", sizeof(&arr[0]+1));//4/8  第二个元素的地址

	printf("%d\n", strlen(arr));//随机值,arr首元素地址,向后找 \0 
	printf("%d\n", strlen(arr+0));//随机值
	printf("%d\n", strlen(*arr));//错误   
	printf("%d\n", strlen(arr[1]));//错误  
	printf("%d\n", strlen(&arr));//随机值
	printf("%d\n", strlen(&arr+1));//随机值
	printf("%d\n", strlen(&arr[0]+1));//随机值-1

	char arr[] = "acdef";
	printf("%d\n", sizeof(arr));//7
	printf("%d\n", sizeof(arr + 0));// 4/8
	printf("%d\n", sizeof(*arr));//  1 
	printf("%d\n", sizeof(arr[1]));//  1
	printf("%d\n", sizeof(&arr));// 4/8
	printf("%d\n", sizeof(&arr + 1));// 4/8
	printf("%d\n", sizeof(&arr[0] + 1));// 4/8

	printf("%d\n", strlen(arr));// 6
	printf("%d\n", strlen(arr + 0));// 6
	printf("%d\n", strlen(*arr));// 错误
	printf("%d\n", strlen(arr[1]));// 错误
	printf("%d\n", strlen(&arr));// 6
	printf("%d\n", strlen(&arr + 1));// 随机值
	printf("%d\n", strlen(&arr[0] + 1));// 5


	return 0;
}
