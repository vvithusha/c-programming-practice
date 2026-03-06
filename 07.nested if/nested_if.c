#include <stdio.h>

int main()
{
    // check the user input number is positive even or negative even or odd

    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("num = %d\n",num);

    if (num > 0)
    {
        if (num%2==0)
        {
            printf("%d is positive even number",num);
        }
        else
        {
            printf("%d is positive odd number",num);
        }
    }
    else
    {
        if(num%2 == 0)
        {
            printf("%d is negative even number",num);
        }
        else
        {
            printf("%d is negative odd number",num);
        }
    }
}