#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100] = "hello";
    char str2[100] = "world!";

    strcat(str1,str2);

    printf("After concatenation:%s\n",str1);

    return 0;
}