#include<stdio.h>
#include<conio.h>
int main()
{
  int f1,f2,rem i;
  printf("Enter the first number for range:");
  scanf("%d",&f1);
  printf(" Enter the finel number for range:");
  scanf("%d,&f2);
  printf("the even number between %d and %d are ",f1f2);
  for(i=f1;i<=f2;i++)
  {
    rem =i%2;
    if(rem ==0)
    printf("\n %d",i);
  }
  return 0;
}
