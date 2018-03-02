#include<stdio.h>
#include<conio.h>
int main()
{
   int i,n,t1=1,t2=0,temp;
   printf("enter the number");
   scanf("%d",&n);
   for(i=1;i<n-2;i++)
   {
       printf("%d",t1);
        temp=t1+t2;
        t2=t1;
        t1=temp;
   }
 return 0;
}
