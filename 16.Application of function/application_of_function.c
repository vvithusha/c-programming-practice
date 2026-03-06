#include <stdio.h>

int calculat(int a, int b)
{
   
     int c = a - b;
     int d = a + a;
     int e = a * b;
     int f = b / a;
     printf("addition: %d\n", d);
     printf("subtraction: %d\n", c);
     printf("multiplication: %d\n", e);
     printf("division: %d\n", f);
        return 0;
}

void main()
{
    int a =80;
    int b =999;

    calculat(a,b);
}