#include <stdio.h>

int main()
{   
    int a = 4;
    int b = 4;

    if(a == b)
    {
        printf(" a is equal to b\n");
    }
    else if(a < b)
    {
        printf("a is lessthan b\n");
    }
    else if(a > b)
    {
        printf("a greater than b\n");
    }
    else
    {
        printf("end code!\n");
    }


    // the calculator
    int x;
    printf("enter the number:");
    scanf("%d",&x);
    printf("x = %d\n",x);
    
    getchar();

    int y;
    printf("enter the number:");
    scanf("%d",&y);
    printf("y = %d\n",y);

    printf("addition:%d\n",x+y);
    printf("subraction:%d\n",x-y);
    printf("divition:%d\n",x/y);
    printf("multiplication:%d\n",x*y);

    // calculate tha number is even or odd number or zero
       
    int t;
    printf("enter the number:");
    scanf("%d",&t);
    printf("t = %d\n",t);

    if(t%2==0)
    {
        printf("%d is even number\n");
    }
    else if(t%1 == 0)
    {
        printf("%d id odd number\n");
    }
    else{
        printf("%d is a zero\n");
    }
    return 0 ;
}