#include <stdio.h>
#include<string.h>
int main()
{
    int a,b,n;
    printf("enter the  first number ");
    scanf("%d",&a);
    printf("enter the second number");
    scanf("%d",&b);
    scanf("%d",&n);
    if(n%2==0)
    {
         printf("even");

    }
    else
    {
         printf("odd");
    }
}
