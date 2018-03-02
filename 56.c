#include <stdio.h>
#include<string.h>
int main() 
{
	char str[10];
	int n,i,flag;
	printf("enter the string:");
	scanf("%s",str);
	n=strlen(str);
	for(i=1;i<n;i++)
	{
		if((str[i]>='a'&&str[i]<='z')||(str[i]>='A' && str[i]<='Z'))
		{
			flag=1;
		}
		else if(str[i]>='0' && str[i]<='9')
		{
			flag=2;
		}
		else
		{
			flag=0;
		}

	}
	if(flag==1 && flag==2)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}

	return 0;
