#include <stdio.h>

int main()
{
    // find sum of natural numbers
   /* int i = 1, n, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    while (i <= n)
    {
        sum = sum + i;
        i++;
    }
    printf("Sum of the values is: %d\n", sum);


    

    // find factorial using for loop
    int j, natural, fact = 1;

    printf("Enter the natural value of n: ");
    scanf("%d", &natural);

    for (j = 1; j <= natural; j++)
    {
        fact = fact * j;
    }
    printf("Factorial (for loop): %d\n", fact);




    // find factorial using while loop
    int x = 1, na, facto = 1;

    printf("Enter the value for factorial: ");
    scanf("%d", &na);

    while (x <= na)
    {
        facto = facto * x;
        x++;
    }
    printf("Factorial (while loop): %d\n", facto);

    */

    //find factorial use do_while loop

    int r=1 , nat , fac=1;

    printf("enter the value of n:");
    scanf("%d",&nat);

    do

    {
       fac = fac * r;
       r++;

    }

    while (r <= nat);

    {
        printf("factorial:%d",fac);
    }
    
    
    return 0;
}
