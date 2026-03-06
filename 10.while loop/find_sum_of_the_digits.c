#include <stdio.h>

int main()
{

    //find sum of the digits
    int n , sum = 0;

    printf("enter the number:");
    scanf("%d",&n);

    while (n > 0)
    {
        /* code */
        sum = sum + (n%10);  //get last digit
        n = n / 10;          // subtract last digit
    }
    printf("sum of the digits:%d",sum);
    

}