#include <stdio.h>

int main()
{
    int n , arr[50] , min ,max,i;

    printf("Enter how many number include:"); //how many number get
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        printf("Enter the elements:");
        scanf("%d",&arr[i]);
    }

    min = arr[0];
    max = arr[0];

    for(i=1 ; i<n ; i++)
    {
        if(arr[i] >max)
        {
            max = arr[i];
        }
        if(arr[i] < min)
        {
            min = arr[i];

        }
    }
    printf(" max : %d \n ",max);
    printf("min : %d \n",min);

    return 0;
}