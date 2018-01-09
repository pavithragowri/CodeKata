#include<stdio.h>
#include<conio.h>
void main()
{
  char ch;
  printf("Enter any alphabet");
  scanf("%c",&ch);
  if((ch>=65 &&ch<=90)!!(ch>=97&&ch<=122))
  {
    printf("Enter character is ALPHABET");
  }
  else
  {
   printf("Enter the character is not an ALPHABET");
  }
  getch()
}  
