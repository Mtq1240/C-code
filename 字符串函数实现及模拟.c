函数介绍
strlen:

size_t strlen ( const char * str );
·字符串已经'\0'作为结束标志，strlen函数返回的是在字符串中'\0'前面出现的字符个数(不包含'\0')●参数指向的字符串必须要以‘\0'结束。
·注意函数的返回值为size_t，是无符号的(易错)·学会strlen函数的模拟实现

strcpy:

char* strcpy(char * destination，const char *source );
.Copies the C string pointed by source into the array pointed by destination,
 including the terminating nucharacter (and stopping at that point).
源字符串必须以'\O'结束。
·会将源字符串中的'\0'拷贝到目标空间。
·目标空间必须足够大，以确保能存放源字符串。·目标空间必须可变。
·学会模拟实现。

strcat:

char * strcat ( char * destination，const char * source );
.Appends a copy of the source string to the destination string. The terminating null character in
destination is overwritten by the first character of source, and a null-character is included at the end ofthe new string formed by the concatenation of both in destination.
·源字符串必须以'\0'结束。
·目标空间必须有足够的大，能容纳下源字符串的内容。·目标空间必须可修改。
