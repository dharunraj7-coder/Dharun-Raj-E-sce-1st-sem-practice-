#include<stdio.h>
int main()
{
 int a,b,c;
 scanf("%d %d %d",&a,&b,&c);
 if(a<b && a<c){
 printf("smallest is a");
 }
 else if(b<a && b<c)
 {  printf("smallest is b");
 }
 else
 {
 printf("smallest is c");
 }
 return 0;
 }
