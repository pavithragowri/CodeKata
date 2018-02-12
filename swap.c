#include<stdio.h>
#include<conio.h>
int main()
{
   int a,b;
   printf("enter the number");
   scanf("%d%d%",&a,&b);
   swap(&a,&b);
   printf("after the swapping the value a and b is  %d%d",a,b);
 }
   void swap(int*x,int*y)
   {
   int temp=*x;
   *x=*y;
   *y=temp;
   }
   
