#include<stdio.h>
#include<string.h>
int main()
{

    char s1[50],s2[50],ch=',';
    printf("enter the string :");
    scanf("%[^\n]s",s1);
    printf("%c %c %c",s1[0],ch,s1[2]);
 return 0;
}

