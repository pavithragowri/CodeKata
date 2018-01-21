#include<stdio.h>
#include<conio.h>
void main()
{
  double base,exponent,result;
  printf(" Enter a base number :");
  scanf("%f",&base);
  printf("Enter an exponent:");
  scanf("%1f",&exponent);
  result=pow(base,exponent);
  printf("%.11f^%.11f=%.21f",base,exponenet, result);
  return 0;
}  
