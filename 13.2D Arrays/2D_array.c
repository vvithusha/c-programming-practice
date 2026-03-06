#include <stdio.h>
#include <string.h>

int main()
{
    int arr[2][2] ,i,j;

    for (i=0 ; i<2 ; i++)
    {
        for (j=0 ; j<2 ;j++)
        {
            printf("Enter Elements:");
            scanf("%d",&arr[i][j]);
        }
    }
    for (i=0; i<2; i++)
    {
       for (j=0; j<2 ; j++)
       {
          printf("%d\t",arr[i][j]);
       }
       printf("\n");
    }
}