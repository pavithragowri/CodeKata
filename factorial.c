#include<stdio.h>
#include<conio.h>
void main()
{
  int n;fact=1,i;
  printf("Enter any integer");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
     fact=fact*i;
   }
   printf("factorial of given number is %d",fact);
 return 0;
 }
   
