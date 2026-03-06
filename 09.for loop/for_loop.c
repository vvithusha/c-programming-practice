#include <stdio.h>

int main()
{
   int j;
   for (j=1 ; j<=10 ; j++)
   {
    printf("j = %d\n",j);
   }
   //first n natural number
   int i , n ,sum=0;
   
   printf("enter the value of n:\n");
   scanf("%d",&n);

   for (i=1; i<=n ; i++)
   {
     sum = sum + i;
   }
   printf("sum = %d",sum);
}