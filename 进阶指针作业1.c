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


//2.
//下面程序的结果是：（A ）
int main()
{
  int aa[2][5] = {10,9,8,7,6,5,4,3,2,1};
  int *ptr1 = (int *)(&aa + 1);
  int *ptr2 = (int *)(*(aa + 1));	//跟上题类似，&aa的类型是int (*)[2][5]，加一操作会导致跳转一个int [2][5]的长度，直接跑到刚好越界的位置。减一以后回到最后一个位置1处。
	  				//*(aa + 1)相当于aa[1]，也就是第二行的首地址，自然是5的位置。减一以后由于多维数组空间的连续性，会回到上一行末尾的6处。故选A。
  printf( "%d,%d", *(ptr1 - 1), *(ptr2 - 1));
  return 0;
}
A.    1, 6
B.    10, 5
C.    10, 1
D.    1, 5
