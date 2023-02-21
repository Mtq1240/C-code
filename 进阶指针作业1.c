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


//下面test函数设计正确的是：（  B D ）
//char* arr[5] = {"hello", "bit"};
//test(arr);
A.    void test(char* arr);
B.    void test(char** arr);
C.    void test(char arr[5]);
D.    void test(char* arr[5]);
//指针的数组传递给子函数变为指针的指针，也就是二级指针。但是允许中括号写法，写成char **arr、char *arr[]、char * arr[5]都可。所以BD正确。
