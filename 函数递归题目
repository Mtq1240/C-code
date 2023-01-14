//字符串逆序(1)

int my_strlen(char *str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

char reverse_string(char* str)
{
	int left = 0;
	int right = my_strlen(str) - 1;
	while (left < right)
	{
		char tmp = *(str+left);  //等同于str[left],  *(str+left)->str0的地址元素  解应用*()
		*(str + left) = *(str + right);
		*(str + right) = tmp;
		left++;
		right--;
	}
	return str;
}
#include<stdio.h>
int main()
{
	char arr[] = "abcdef";
	reverse_string(arr);
	printf("%s\n", arr);
	return 0;
}





//2.递归实现:
#include<stdio.h>
int my_strlen(char *str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

void reverse_string(char *str)
{
	char tmp = *str;     //1,首元素地址存在tmp中
	int len = my_strlen(str);   //2,求出str数组大小
	*str = *(str+len-1); 	//3,末尾元素地址-1赋值给首地址
	*(str+len-1) = '\0';	//4,\0赋值给末尾元素才能求数组大小
	if (my_strlen(str + 1) >= 2)
	{
		reverse_string(str + 1);
	}
	*(str + len - 1) = tmp;		//tmp即首元素存放到末尾元素地址
}

int main()
{
	char arr[] = "abcd";
	reverse_string(arr);
	printf("%s\n", arr);
	return 0;
}



//计算一个数的每一位之和,递归实现
#include<stdio.h>
int DigitSum(int n)
{
	if (n > 9)
	{
		return DigitSum(n / 10) + n % 10;
	}
	else
	{
		return n;
	}
}
int main()
{
	int num = 0;
	scanf("%d", &num);
	int sum = DigitSum(num);
	printf("%d", sum);
	return 0;
}



//实现n的k次方,递归实现
#include<stdio.h>
double Pow(int n, int k)
{
	if (k == 0)
	{
		return 1;
	}
	else if (k > 0)
	{
		return n * Pow(n, k - 1);
	}
	else
	{
		return 1.0 / (n * Pow(n, -k-1));		//-k-1,是实现转换为正数进行递归
	}
}
int main()
{
	int n = 0;
	int k = 0;
	scanf("%d %d", &n, &k);
	double ret = Pow(n, k);
	printf("%lf", ret);
}
