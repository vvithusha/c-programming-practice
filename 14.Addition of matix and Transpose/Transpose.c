#include <stdio.h>
#include <string.h>

int main()
{
    int arr[3][3],arr2[3][3],i,j;
    //get first matix
    for (i=0 ; i<3 ; i++)
    {
        for (j=0 ; j<3 ; j++)
        {
            printf("Enter the elements:");
            scanf("%d",&arr[i][j]);
        }
    }
    //Transpose matix
    for (i=0; i<3 ; i++)
    {
        for (j=0; j<3 ; j++)
        {
            arr2[i][j] = arr[j][i];
        }
    }
    printf("original matix:\n");
     for (i=0 ; i<3; i++)
    {
        for (j=0 ; j<3; j++)
        {
            
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    printf("Transpose matix:\n");
     for (i=0 ; i<3; i++)
    {
        for (j=0 ; j<3; j++)
        {
            
            printf("%d\t",arr2[i][j]);
        }
        printf("\n");
    }
}