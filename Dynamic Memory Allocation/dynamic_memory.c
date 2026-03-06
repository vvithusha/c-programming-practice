#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    /*char str[100];
    str[0] = 'c'; */   // 99bytes waste

    char *name;

    name = malloc(5);   //first memory allocation
    realloc(name,100);  //reallocate memory
    name = strcpy(name,"hello world!");

    printf("%s\n",name);

    name = calloc(500,1);
    strcpy(name , "hello world!!!");

    printf("%s\n",name);

    free(name);  //free allocated memory

    printf("%s\n",name); //dangling pointer


    
}