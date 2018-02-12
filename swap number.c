#include<stdio.h>
#include<conio.h>
int main()
{
   int a,b;
   printf("enter the number");
   scanf("%d%d",&a,&b);
   a=a^b;
   b=b^a;
   a=a^b;
   printf("enter the value of a&b after a swapping");
   return 0;
   }
