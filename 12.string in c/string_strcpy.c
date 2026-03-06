#include <stdio.h>
#include <string.h>

int main()
{
    char source[] = "ChatGPT";   //store string
    char destination[50];        // array

    strcpy(destination , source);
    printf("Copied String: %s \n",destination);

    return 0;
}