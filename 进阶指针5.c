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

	char* p = "abcdef";
	printf("%d\n", sizeof(p));// 4/8
	printf("%d\n", sizeof(p+1));// 4/8
	printf("%d\n", sizeof(*p));// 1
	printf("%d\n", sizeof(p[0]));// 1
	printf("%d\n", sizeof(&p));// 4/8
	printf("%d\n", sizeof(&p+1));// 4/8
	printf("%d\n", sizeof(&p[0]+1));//4/8

	printf("%d\n", strlen(p));// 6
	printf("%d\n", strlen(p+1));// 5
	printf("%d\n", strlen(*p));// 错误,*p传的是a的ascall码值
	printf("%d\n", strlen(p[0]));// 错误
	printf("%d\n", strlen(&p));// 随机值
	printf("%d\n", strlen(&p + 1));// 随机值
	printf("%d\n", strlen(&p[0] + 1));// 5
	
	int a[3][4] = { 0 };
	printf("%d\n", sizeof(a));//48
	printf("%d\n", sizeof(a[0][0]));//4  
	printf("%d\n", sizeof(a[0]));//16   二维数组第一行的地址
	printf("%d\n", sizeof(a[0]+1));//4/8 a[0]作为数组名没有单独放在sizeof中,也没有取地址,
								   //所以a[0]+1表示第一行第一个元素的地址,+1就是第二个元素的地址
	printf("%d\n", sizeof(*(a[0] + 1)));//4 第一行第二个元素
	printf("%d\n", sizeof(a+1));//4  a作为二维数组的数组名,并没有取地址,也没有单独放在sizeof内部,所以a表示
								//二维数组首元素的地址即第一行的地址,a+1就是二维数组第二行的地址
	printf("%d\n", sizeof(*(a + 1)));//16 a+1是第二行的地址,所以*(a+1)表示第二行,计算的就是第二行的大小
	printf("%d\n", sizeof(&a[0] + 1));//4  a[0]是第一行的数组名,&a[0]取出的就是第一行的地址,+1就是第二行的地址
	printf("%d\n", sizeof(*( & a[0] + 1)));//16  &a[0]+1 就是第二行的地址
	printf("%d\n", sizeof(*a));//16 a作为二维数组的数组名,没有&,没有单独放在sizeof内部,a就是首元素的地址,即第一行的地址,
							   //解引用就是第一行的大小
	printf("%d\n", sizeof(a[3]));//16  a[3]就是int[4],其实是第四行的数组名(如果有的话),所以其实不存在,也能通过类型计算大小

	return 0;
}
