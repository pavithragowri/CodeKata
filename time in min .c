#include<stdio.h>
#include<conio.h>
int main()
{
  int minutes,hr,min;
  printf("\n Enter minutes");
  scanf("%d",&minutes);
  hr=minutes/60;
  min=minutes%60;
  printf("%dhr %dmin",hr,min);
  }
  
