#include <stdio.h>
int main() 
{
	char s[50];
	int i;
	printf("enter the string:");
	scanf("%[^\n]s",s);
	if(printf("\n%s",s))
	return 0;
}
