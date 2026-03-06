#include <stdio.h>
#include <string.h>

int main()
{
    int n,i;
    char str[100][100];

    printf("enter the number:");//get how many strign are include
    scanf("%d",&n);

    for (i=0; i<n; i++)
    {

    printf("Enter the String:",i+1);
    scanf("%s",str[i]);
    
    }
    printf("the strings are: \n");
    for(i=0; i<n; i++)
    {
        printf("%s\n",str[i]);
    }

    return 0;
}