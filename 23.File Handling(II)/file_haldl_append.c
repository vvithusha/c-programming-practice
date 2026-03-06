#include <stdio.h>

int main()
{
   FILE *fp;

   fp = fopen("hello.txt","a");

   fputc('_' , fp);
   fputs ("AI ENGINEER",fp);

   fclose(fp);
}