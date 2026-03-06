#include <stdio.h>

void main()
{
    int height[50],i;   //arrays

    height[0] = 45;   //stroge data
    height[1] = 90;
    height[2] = 23;
    height[3] = 33;

    /*printf("%d\n",height[0]);  //print data
    printf("%d\n",height[1]);
    printf("%d\n",height[2]);
    printf("%d\n",height[3]);
    printf("%d\n",height[4]);
    
    height[4] = 90;

    printf("%d",height[4]);  */  //update date

    for(i=3 ; i<6 ; i++)

    {
        printf("Enter the number:");  //get user input
        scanf("%d",&height[i]);
    }

    for(i=0; i<6; i++)

    {
        printf("%d\n",height[i]);   //print all arrays value
    }


}