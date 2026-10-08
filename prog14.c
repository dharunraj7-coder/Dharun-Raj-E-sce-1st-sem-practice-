#include<stdio.h>
int main()
{ 
 float a,b;
 scanf("%f",&a);
 printf("price=%f",a);
 scanf("%f",&b);
 printf("percentage discount=%f\n",b);
 printf("final price=%f\n",a-(a/b));
 return 0;
 }
 
