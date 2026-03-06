#include <stdio.h>

//arithmetric operation
int main()
{
    int a =1;
    int b =1;

    printf("%d\n",a && b);  // and gate
    printf("%d\n",a || b);  // or gate
    printf("%d\n",!a);      // not gate
    printf("%d\n",&a);      // get memory store number
    
    
    // exercise 
    int h = 1;
    int g = 0;

    printf("%d\n",h && g);
    printf("%d\n", h || g);

    return 0;

}