#include <stdio.h>

int main()
{
    int n ,copy,rev;

    printf("enter the number:");
    scanf("%d",&n);

    copy = n;

    while(copy > 0)
    {
        rev = rev*10;

        rev = rev + (copy%10);
        copy = copy / 10;
    }
    if (n == rev)
    {
        printf("palindoram ");
    }
    else
    {
        printf("not a palidoram");
    }
    
     

}