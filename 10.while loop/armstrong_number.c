#include <stdio.h>
#include <math.h>


int main()
{
    //check is the armstrong number
    int n,copy,digit=0,sum=0;

    printf("Enter the number:");
    scanf("%d",&n);

    copy = n;

    while (copy > 0)
    {
        copy = copy/10;
        digit++;
    }

    copy = n;

    while(copy>0)
    {
        sum = sum + pow((copy%10),digit);
        copy = copy/10;
    }

    if(sum == n)
    {
       printf("Armstrong number");
    }

    else
    {
        printf("Not a Armstrong number");
    }
        
}