#include <stdio.h>
#include <conio.h>

int main()
{
    int n , copy ,rev = 0;

    printf("enter the number:");
    scanf("%d",&n);

    copy = n;

    while(copy > 0)
    {
        rev = rev*10;

        rev = rev + (copy%10);
        copy /= 10;
    }
    return 0;
}