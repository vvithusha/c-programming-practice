#include <stdio.h>

//A function that call as itself that function called recursion

int fact(int n)
{
    if(n <= 1)
        return 1;  // base case
    else
        return n*fact(n-1);  // recursive case
}

void main()
{
    int n = 5;
    int c = fact(n);
    printf("factorial of %d is %d \n",n,c);
}