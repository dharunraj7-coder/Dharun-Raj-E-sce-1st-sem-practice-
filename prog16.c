#include"stdio.h"
 int main()
 {
   int a,b;
   scanf("%d",&a);
   scanf("%d",&b);
   printf("first integer=%d",a);
   printf("second integer=%d\n",b);
   printf("%d\n",(a && b));
   printf("%d\n",(a || b));
   printf("%d\n",!a);
   return 0;
   }
