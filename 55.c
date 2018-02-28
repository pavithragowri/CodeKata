#include <stdio.h>
int main() 
{
	int n,m,pro;
	printf("enter the number1:");
	scanf("%d",&n);
	printf("enter the number2:");
	scanf("%d",&m);
	pro=n*m;
	if(pro%2==0)
	{
		printf(" even");
	}
	else
	{
		printf(" odd");
	}
	return 0;
}
 
