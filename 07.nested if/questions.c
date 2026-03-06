#include <stdio.h>

int main()
{
    // calculate user input year is leap year or not'
    int year;
    printf("Enter the year:");
    scanf("%d",&year);
    printf("year = %d\n",year);

    //check year is leap
    if ((year%4 == 0 && year%100!=0) || year%400 ==0)
    {
        printf("%d year is leap year\n");
    }
    else
    {
        printf("%d year is not a leap year\n");
    }
    
    
}