#include <stdio.h>
void main() 
{
	int num,rem,rev=0,n;
	printf("enter the number:");
	scanf("%d",&num);
	while(num!=0)
	{
		rem=num%n;
		rev=(rev*n)+rem;
		num=num/n;
	}
	num=rev;
	while(num!=0)
	{
		rem=num%n;
		printf("%d ",rem);
		num=num/n;
	}

}
