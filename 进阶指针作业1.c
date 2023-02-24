//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 =AABCD和s2 = BCDAA，返回1
//给定s1=abcd和s2=ACBD，返回0.
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//AABCD右旋一个字符得到DAABC
int findRound(const char * src, char * find)
{
	char tmp[256] = { 0 }; //用一个辅助空间将原字符串做成两倍原字符串
	strcpy(tmp, src); //先拷贝一遍
	strcat(tmp, src); //再连接一遍
	return strstr(tmp, find) != NULL; //看看找不找得到
}



//字符串左旋
//实现一个函数，可以左旋字符串中的k个字符。
//例如：ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB

void leftRound(char * src, int time)
{
	int i, j, tmp;
  int len = strlen(src);
  time %= len; //长度为5的情况下，旋转6、11、16...次相当于1次，7、12、17...次相当于2次，以此类推。
	for (i = 0; i < time; i++) //执行k次的单次平移
	{
		tmp = src[0];
		for(j = 0; j < len - 1; j++) //单次平移
		{
			src[j] = src[j + 1];
		}
		src[j] = tmp;
	}
}


//1.
//下面test函数设计正确的是：（  B D ）
//char* arr[5] = {"hello", "bit"};
//test(arr);
A.    void test(char* arr);
B.    void test(char** arr);
C.    void test(char arr[5]);
D.    void test(char* arr[5]);
//指针的数组传递给子函数变为指针的指针，也就是二级指针。但是允许中括号写法，写成char **arr、char *arr[]、char * arr[5]都可。所以BD正确。


//2.下面程序的结果是：（ A ）
int main()
{
  int aa[2][5] = {10,9,8,7,6,5,4,3,2,1};
  int *ptr1 = (int *)(&aa + 1);//&aa取出的是整个二维数组的地址,+1跳到数组末尾元素后+1地址,-1解引用就是1
  int *ptr2 = (int *)(*(aa + 1));//*(aa + 1)相当于aa[1]，也就是第二行的首地址，自然是5的位置。减一以后由于多维数组空间的连续性，会回到上一行末尾的6处
  printf( "%d,%d", *(ptr1 - 1), *(ptr2 - 1));
  return 0;
}
A.    1, 6
B.    10, 5
C.    10, 1
D.    1, 5

		
	
//3.
//下面代码中print_arr函数参数设计哪个是正确的？（ C ）
 int arr[3][5] = {1,2,3,4,5,6,7,8,9,10};
 print_arr(arr, 3, 5);
A.    void print_arr(int arr[][],int row, int col);
B.    void print_arr(int* arr, int row, int col);
C.    void print_arr(int (*arr)[5], int row, int col);
D.    void print_arr(int (*arr)[3], int row, int col);
//二维数组相当于数组的数组，传到子函数变成数组的指针。int arr[3][5]相当于是3个元素的arr，
//每个元素是int [5]，所以int [5]是类型说明不能省略。丢失的信息只有数组的元素个数，
//也就是3。A丢了类型中的5，B选项指针层级都错了，D选项5写成了3，故选C。
