#include<stdio.h>    
int main()    
{    
 int a=0,b=1,c,i,number;    
 scanf("%d",&number);    
 printf("%d %d",a,b);
 for(i=2;i<number;++i)
 {    
  c=a+b;    
  printf(" %d",c);    
  a=b;    
  b=c;    
 }  
  return 0;  
 } 