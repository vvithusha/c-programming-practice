#include <stdio.h>
#include <conio.h>

int main()
{    
    // get integer
    int a ;
    printf("enter a number:");
    scanf("%d",&a);

    printf("a = %d\n", a );
    
    // get char
    getchar();

    char b;
    printf("enter a char:");
    scanf("%c",&b);
    printf("b = %c\n",b);

    // get float
    getchar();

    float c;
    printf("enter the floar:");
    scanf("%f",&c);
    printf("c = %f\n",c);

    getch();
    return 0;
}