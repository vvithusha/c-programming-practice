#include <stdio.h>
#include <string.h>

int main()
{
    int arr[2][3] ,arr2[2][3],i,j;
    
    //get first array
    printf("first array\n");

    for (i=0 ; i<2; i++)
    {
        for (j=0 ; j<2; j++)
        {
            printf("Enter Element:");
            scanf("%d",&arr[i][j]);
        }
    }
    //get secound array
    printf("secound array\n");

    for (i=0 ; i<2; i++)
    {
        for (j=0 ; j<2; j++)
        {
            printf("Enter Element:");
            scanf("%d",&arr2[i][j]);
        }
    }
    //add of two array
     for (i=0 ; i<2; i++)
    {
        for (j=0 ; j<2; j++)
        {
            printf(" %d",arr[i][j] + arr2[i][j]);
        }
        printf("\n");
    }
}