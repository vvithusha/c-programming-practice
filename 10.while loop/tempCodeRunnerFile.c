#include <stdio.h>

int main()
{
    int n, i, j, flag;

    printf("Enter the number: ");
    scanf("%d", &n);

    for(i = 2; i <= n; i++)      // start from 2
    {
        flag = 0;                // assume i is prime

        for(j = 2; j <= i / 2; j++)  // check divisibility
        {
            if(i % j == 0)
            {
                flag = 1;        // not prime
                break;
            }
        }

        if(flag == 0)            // if still 0 → prime
            printf("%d ", i);
    }

    return 0;
}
