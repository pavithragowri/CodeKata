#include<stdio.h>
#include<string.h>
int main()
{
    char b[50];
    int n,i;
    scanf("%s",b);
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
      printf("%c",b[i]);
    }
return 0;
}
