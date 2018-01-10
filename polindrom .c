#include<stdio.h>
#include<conio.h>
void main()
{
  int n,rem,rev=0,t;
  printf("Enter the number");
  scanf("%d,&n);
  t=n;
  while(n!=0)
  {
     rem=n%10;
     rev=rev*10+rem
     n=n/10;
  }
