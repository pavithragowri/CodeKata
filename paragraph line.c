#include<stdio.h>
#include<string.h>
int main()
{
	int sum=1,a;
	char str[50];
  printf("Enter the string");
  gets(str);
	a=strlen(str);
	for(int i=0;i<=a;i++)
	{
		if(str[i]=='.')
		{
		    sum=sum+1;
		}
	}
	printf("The no of line in theparagraph %d\n",sum);
	return 0;
}

