#include<stdio.h>
#include<conio.h>
void main()
{
  int num,m=2,n=4;
  printf("print odd numbers in a given range m to n:\n");
  for(num=m;num<=n;num++)
  {
     if(num %2==1)
     printf("%d",num);
   }
   getch();
 }
