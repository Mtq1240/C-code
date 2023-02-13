1.求 n的阶乘

#include<stdio.h>
int main()
{
  int i = 0;
  int n = 0;
  int ret = 1;
  scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        ret = ret*i;
     }
      printf("阶乘结果为:%d",ret);
  return 0;
}

2.计算1!+2!+3!+4!+...+10!

#include<stdio.h>
int main()
{
    int i = 0;
    int n = 0;
    int ret = 1;
    int sum = 0;
    for (n=1;n<=10;n++) 
    {
        ret = 1;
        for (i = 1; i <= n; i++)
        {
            ret = ret * i;
        }
        sum = sum + ret;
    }
    printf("阶乘结果为:%d\n", sum);
    return 0;
}
