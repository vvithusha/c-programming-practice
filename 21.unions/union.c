#include <stdio.h>
#include <string.h>

union book
{
    int no;
    char Author[50];
    float price;
};

int main()
{
    
    union book hp;

    hp.no = 6;
    hp.price = 890.45;
    strcpy(hp.Author, "J.K.Rowling");

    printf("book number:%d",hp.no);
    printf("\nbook price:%.2f",hp.price);
    printf("\nbook Author:%s",hp.Author);


    union book p1;

    p1.no = 9;
    p1.price = 450.34;
    strcpy(p1.Author,"ronda");

    printf("\n\nbook number:%d",p1.no);
    printf("\nbook price:%.2f",p1.price);
    printf("\nbook Author:%s",p1.Author);
    

    return 0;

  
}
