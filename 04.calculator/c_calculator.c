#include <stdio.h>

int main()
{
    int a=30;
    int b=4;

    //addition
    int sum = a+b;
    int sub = a-b;
    int multi = a*b;
    int divi = a/b;
    int floor = a%b;

    printf("addition:%d\n",sum);
    printf("subraction:%d\n",sub);
    printf("multipilication:%d\n",multi);
    printf("divition:%d\n",divi);
    printf("floor divition:%d\n",floor);


    int r=5;
    int f=6;

    r++;
    f--;
    printf("increse:%d\n",r);
    printf("decrese:%d\n",f);

    //increse and decrese
     
    int c =20;
    printf("%d\n",&c);
    c++;
    printf("%d\n",&c);
    c--;
    printf("%d\n",&c);

    //graeter then and lass than
    int g= 40;
    int h=30;

    printf("is g grater than h:%d\n",g>h);
    printf("is h is grater than g:%d\n",h>g);
    printf("is g lessthan h:%d\n",g<h);
    printf("id h lessthan g:%d\n",h<g);

    int num_int=90;
    printf("%d\n",num_int);
    printf("%zu",sizeof(num_int));

    int p=9;
    int q=5;
    printf("%d\n",q>p);
    printf("%d\n",p<q);
    printf("%d\n",q>=p);
    printf("%d\n",p<=q);
    printf("%d\n",p!=q);
    printf("%d\n",p!=q);


    return 0;
}