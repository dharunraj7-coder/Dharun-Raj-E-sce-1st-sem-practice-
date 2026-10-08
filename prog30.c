#include<stdio.h>
int main()
{
 int a,b,c;
 scanf("%d %d %d",&a,&b,&c);
 if(a>b && a>c){
 printf("largest is a");
 }
 else if(b>a && b>c)
 {  printf("largest is b");
 }
 else
 {
 printf("largest is c");
 }
 return 0;
 }
