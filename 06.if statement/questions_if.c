#include <stdio.h>

int main()
{
    // calculate the number is positive or negative or zero
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    printf("num = %d\n",num);

    if(num>0)
    {
        printf("%d is positive",num);
    }
    else if(num<0)
    {
        printf("%d is negative",num);
    }
    else
    {
        printf("%d is zero",num);
    }
    return 0;
}