#include<stdio.h>
#include<conio.h>
void main()
{
  int i,n flag=0;
  printf("Enter the positive integer:");
  scanf("%d",&n);
  for(i=2;i<=n%2;i++)
  {
   if(n%i==0)
   {
    flag=1;
    break;
    }
  }
  if(flag==0)
  {
    printf("is a prime number ",n);
   }
   else
   {
     print(" is not a prime number "n);
    }
    return 0;
   }
