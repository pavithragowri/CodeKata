#include<stdio.h>
#include<conio.h>
int main()
{
   int arr[MIN SIZE];
   int i,min, size;
   printf("Enter size of array");
   scanf("%d",&size);
   printf("Enter element of array ");
   for(i=0;i<size;i++)
   {
    scanf("%d",arr[i]);
   }
   min=arr[0];
   for(i-1;i<size;i++)
   {
     if(arr[i]<min)
     { 
      min=arr[i];
      }
    }
    printf("minimum element="%d",min");
    return 0;
 }
