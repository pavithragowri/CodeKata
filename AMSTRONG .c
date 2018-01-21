#include<stdio.h>
#include<conio.h>
void main()
{ 
   int n, t/rem,result=0;
   printf("Enter the number");
   scanf("%d",&n);
   t=n;
   while(n!=0)
   {
     rem=n%10;
     n=n%10;
    }
      if(t==result)
     {
       printf("%d is an armstrong number",n);
      }
      else
      {
        printf("%d is not an armstrong number",n);
       }
       return 0;
   }
