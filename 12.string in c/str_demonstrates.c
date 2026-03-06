#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100] ,str2[100], copy[100];

    //get two string from user
    printf("Enter first string:");
    scanf("%s",str1);

    printf("Enter secound string:");
    scanf("%s",str2);

    //strlen
    printf("\n Length of str1 =%d",strlen(str1));
    printf("\n Length of str2 =%d", strlen(str2));

    //strcat(concatenation)
    char joined[200];
    strcpy(joined,str1);  //copy first string
    strcat(joined,str2);  //add secound string
    printf("\n Aftre strcat: %s" , joined);

    //strcmp

    int cmp = strcmp(str1 ,str2);
    if (cmp == 0)
    {
        printf("\n Both String Are Equal");
    }
    else if (cmp < 0)
    {
        printf("\n str1 comes before str2");
    }
    else
    {
        printf("\n str1 comes after str2");
    }
    
    //strcpy
    strcpy(copy,str1);
    printf("\n After strcpy (copy of str1): %s",copy);

    //strupr (upper case)
    printf("\n upper case str1:%s", strupr(str1));

    //strlwr (lowercase)
    printf("\n Lowercase str2: %s",strlwr(str2));

    //strrev (Reverse)
    printf("\n Reverse of str1: %s",strrev(str1));
    printf("\n Reverse of str2:%s", strrev(str2));

    return 0;
}