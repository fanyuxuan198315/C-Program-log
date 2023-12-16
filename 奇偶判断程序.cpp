#include<stdio.h>
int main()
{
printf("输出结果：odd 为奇数,even 为偶数""\n");
printf("请输入一个数，系统将判断是否为奇数或偶数""\n");
 int n;
 scanf("%d",&n);
 if(n&1)
 printf("odd\n");
 else
 printf("even\n");
 return 0;
}