#include <stdio.h>

int main()
{
    FILE *fp;      

    char c[100];

    fp = fopen("hello.txt","w");  //write file

    fputc('w',fp);
    fputs("hello vithu! what are you doing?",fp);
   
    fclose(fp);



}