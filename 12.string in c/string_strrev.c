#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];

    printf("Enter the string:");
    scanf("%s",str);

    strrev(str);

    printf("Reversed string : %s\n",str);

    return 0;
}