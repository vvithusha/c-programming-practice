#include <stdio.h>

void main()
{
    int n , height[50] ,i,sum=0;

    printf("Enter the numbers:");
    scanf("%d:",&n);       //get how many number include

    for(i=0; i<n; i++)
    {
        printf("elements%d:",i);   //get elements
        scanf("%d",&height[i]);
        sum += height[i];
    }

    printf("sum:%d",sum);
    printf("avg:%.2f",((float)sum/n));
}