#include <stdio.h>

int main()
{
   FILE *fp;
   char c[100];
   
   //open file
   fp = fopen("hello.txt","r");

   fgets(c , 100 , fp);
   printf("%s" ,c);


   //close file

   fclose(fp);

}