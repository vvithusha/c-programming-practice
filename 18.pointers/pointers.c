#include <stdio.h>

// store a variable memory address it call pointing
int main()
{
     int *a;
     float *b;
     char *c;

     int d =5;
     a = &d;
        printf("The value of d is %d\n", *a);  //value
        printf("The address of d is %p\n", a); //address
    
    return 0;
}