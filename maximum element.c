#include<stdio.h>
#include<conio.h>
int main()
{
 int arr[MAX SIZE];
 printf("Enter  size of array");
 scanf("%d",&size);
 printf("Enter element of array");
 for(i=0;i<size;i++)
 {
   scanf("%d",arr[i]);
  }
  max=arr[0];
  for(i=1;i<size;i++)
  {
    if (arr[i]>max)
    {
      max=arr[i];
     }
   }
   printf("maximum element=%d\n",max);
   return 0;
  } 
