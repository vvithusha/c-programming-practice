#include <stdio.h>


// open---> read --> close
int main()
{
    FILE *file;
    char ch;

    // Open the file in read mode

    file = fopen("hello.txt","r");

    /*read --> "r"
     write  --> "w"
     append --> "a"
    */
    
    //read the content from the file

    //getc---> get char 
    //gets---> get string

   ch = getc(file);
    printf("%c",ch);  //get first letter

    ch = getc(file);
    printf("%c",ch);  //get secound lettor  
     
    ch = getc(file);
    printf("%c",ch);   //get thirt letter 

    //get all string

    ch = fgetc(file);
    printf("%c",ch);    

    printf("%s" , ch);

    return 0;
}