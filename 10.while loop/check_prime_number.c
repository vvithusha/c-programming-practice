#include <stdio.h>

int main()
{
    int n ,i ,flag ;

    printf("enter the number:");
    scanf("%d",&n);

    for(i=2; i<n ; i++)
    {
        if(n%i !=0)
           continue;

        else
        {
            flag =0;
            printf("Not a prime number");
            break;
        }
    }
    if(flag==0)
    {
        printf("Prime Number");
    }
    
    return 0;
}