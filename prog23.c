#include<stdio.h>
int main()
{  int a,b;
   double c=a;
   scanf("%d",&a);
   scanf("%d",&b);
   printf("first integer=%d\n",a);
   printf("second integer=%d\n",b);
   printf("implicit=%lf\n",c);
   printf("explicit=%lf\n",(double)a/b);
   return 0;
 }
