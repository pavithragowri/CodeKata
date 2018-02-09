#include<stdio.h>
#include<conio.h> 
void main()
{
   int a[30], i, num, sortest;
   printf("\nEnter no of elements :");
   scanf("%d", &num);
   for (i = 0; i < num; i++)
   scanf("%d", &a[i]);
   sortest= a[0];
   for (i = 0; i < num; i++)
   {
      if (a[i] < sortest)
      {
         sortest = a[i];
      }
  }
   printf("\nSortest Element : %d", sortest);

}

