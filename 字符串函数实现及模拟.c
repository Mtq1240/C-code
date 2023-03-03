函数介绍
//1.
//strlen:

size_t strlen ( const char * str );
·字符串已经'\0'作为结束标志，strlen函数返回的是在字符串中'\0'前面出现的字符个数(不包含'\0')
·参数指向的字符串必须要以‘\0'结束。
·注意函数的返回值为size_t，是无符号的(易错)·学会strlen函数的模拟实现
//模拟实现strlen函数
#include<stdio.h>
#include<assert.h>
int my_strlen(char* str)
{
	int count = 0;//计数器
	assert(str != NULL);
	while (*str != '\0')
	{
		str++;
		count++;
	}
	return count;
}
int main()
{
	char arr[] = "abc";
	int ret = my_strlen(arr);
	printf("%d\n", ret);
	return 0;
}


//2.
//strcpy:

char* strcpy(char * destination，const char *source );
.Copies the C string pointed by source into the array pointed by destination,
 including the terminating nucharacter (and stopping at that point).
源字符串必须以'\O'结束。
·会将源字符串中的'\0'拷贝到目标空间。
·目标空间必须足够大，以确保能存放源字符串。·目标空间必须可变。
·学会模拟实现。


//3.
//strcat:

char * strcat ( char * destination，const char * source );
.Appends a copy of the source string to the destination string. The terminating null character in
destination is overwritten by the first character of source, and a null-character is included at the end ofthe new string formed by the concatenation of both in destination.
·源字符串必须以'\0'结束。
·目标空间必须有足够的大，能容纳下源字符串的内容。·目标空间必须可修改。
//模拟实现stract
//1.找到目标字符串中\0
//2.元素数据追加过去,包含\0

#include<stdio.h>
#include<assert.h>
char * my_stract(char* dest, char* src)
{
	char* ret = dest;
	assert(dest && src);
	//1.找目标字符串的\0
	while (*dest)
	{
		dest++;
	}
	//2.追加源字符串,包含\0
	while (*dest++ = *src++)
	{
		;
	}
	return ret;//返回目标空间的起始地址
}
int main()
{
	char arr1[20] = "hello";
	char arr2[] = "word";
	printf("%s\n", my_stract(arr1, arr2));

	return 0;
}




//4.
//strcmp
//- 字符串比较大小(第一个字符串小于第二个字符串返回小于0的数,大于返回大于0的数,相等返回0)
#include<stdio.h>
#include<assert.h>
int my_strcmp(char* s1, char* s2)
{
	assert(s1 && s2);
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return 0;
		}
		s1++;
		s2++;
	}
	return *s1 - *s2;
}
int main()
{
	char *a = "abcdef";
	char *b = "abcde";
	int ret = my_strcmp(a, b);
	if (ret == 0)
	{
		printf("a=b");
	}
	else if (ret < 0)
	{
		printf("a<b");
	}
	else
	{
		printf("a>b");
	}
	return 0;
}



//受限制的字符串函数
//6.
//strncpy
#include<stdio.h>
int main()
{
	char arr1[20] = "abcdef";
	char arr2[20] = "qwer";
	strncpy(arr1, arr2, 6);
	printf("%s\n", arr1);//qwer\0\0,追加数量大于数组时会强行凑 \0
	return 0;
}



//7.
//strncat
#include<stdio.h>
int main()
{
	char arr1[20] = "hello ";
	char arr2[20] = "word";
	strancat(arr1, arr2,10);
	printf("%s\n", arr1);//hello world\0,当追加的数比数组大时它并不会和strncpy函数一样在后面加上\0,碰到 \0则会停止
	return 0;
}





//8.
//strncmp
#include<stdio.h>
int main()
{
	char* p = "abcdef"; 
	char* q = "abcqwert";
	// int ret = strcmp(p, q); 
	int ret = strncmp(p, q, 4); //比较前四个字符
	printf("%d \n", ret);
	return 0;
}




//9.
//strstr函数实现
#include<stdio.h>
#include<assert.h>
char* my_strstr(const char* str1,const char* str2)
{
	assert(str1 && str2);
	const char* s1 = str1;
	const char* s2 = str2;
	const char* cp = str1;
	if (*str2 == '\0')
	{
		return (char*)str1;
	}
	while (*cp)
	{
		s1 = cp;//方便s1回退
		s2 = str2;//重新找
		while (*s1 && *s2 && *s1 == *s2)
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return (char*)cp;
		}
		cp++;
	}
	return NULL;
}
int main()
{
	char arr1[] = "abcdefabcdef";
	char arr2[] = "bcd";
	//strstr: 在arr1中查找是否包含arr2数组
	char* ret = my_strstr(arr1, arr2);
	if (ret == NULL)
	{
		printf("没找到");
	}
	else
	{
		printf("找到了:%s\n",ret);
	}
	return 0;
}



//10.
//strtok: 切割字符串  char*strtok(char*str,const char*sep);
#include<stdio.h>
#include<string.h>
int main()
{
	char arr[] = "mtq@1240.com";
	char* p = "@.";
	char tmp[20] = { 0 };
	strcpy(tmp, arr);
	char* ret = NULL;
	//第一次strtok函数参数不能为空指针,找到字符串中的第一个标记,strtok将保存标记的在字符串中的位置
	//第一次之后strtok函数参数为NULL,将在第一次保存的位置向后查找第二个标记
	for (ret = strtok(tmp, p); ret != NULL;ret=strtok(NULL,p))//如果找到最后还是没有找到,返回空指针
	{
		printf("%s\n", ret);
	}
}
