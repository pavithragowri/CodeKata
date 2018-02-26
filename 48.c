#include<stdio.h>
int main()
{
    int a[10],i,k,sum=0,avg;
    printf("enter the value");
    scanf("%d",&k);
    for(i=1;i<=10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=10;i++)
    {
        sum=sum+a[i];
        
    }
    
    avg=sum/k;
    printf("%d",avg);
    return 0;
}

