#include <stdio.h>
#include <string.h>

int main()
{
    char a[50] = "apple";
    char b[50] = "banana";

    int result = strcmp(a,b);

    if(result == 0)
    {
        printf("both are same\n");
    
    }
    else if(result <0)
    {
        printf("'%s' is comes before '%s'\n",a,b);

    }
    else{
        printf("'%s' is comes after '%s'\n",a,b);

    }
    return 0;
}