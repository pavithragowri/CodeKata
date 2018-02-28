#include<stdio.h>
int main()
{
     int a,b;
     printf("enter the values ");
     scanf("%d%d",&a,&b);
     swap(&a,&b);
      printf("enter the values of a and b before a swapping");
}
void swap(int*x,int*y)
   {
   int temp=*x;
   *x=*y;
   *y=temp;
   }
