#include <stdio.h>

int main()
{
    int a_num = 34;
    float b_num =8.9;
    char c_num = 'A';
    double d_num = 4.55555;
    

    printf("int_num:%d\n",a_num);
    printf("float_num:%f\n",b_num);
    printf("char_var:%c\n",c_num);
    printf("double_var:%lf\n",d_num);

    //print without variable 
    printf("my age is:%d\n",21);
    printf("my grade is :%c\n",'A');


    /*change a variable*/

    int num =15;
    int other_num;
    other_num = num;
    printf("the number is :%d\n",other_num);

    // declear multiple variables
    int x=50,y=40,z=90;
    printf("total of value is:%d\n",x+y+z);

    int a,b,c;
    a=b=c=50;
    printf("%d\n",a+b+c);

    //charactor data type
    char class = 'A';
    printf("my class is %c\n",class);

    //to store multiple charactor
    char muli_text[] = "hello vithu";
    printf("%s\n",muli_text);

    //scientfic number 
    float f1 = 35e3;
    double f2 = 12e4;
    printf("%f\n",f1);
    printf("%lf\n",f2);
     
    //if you want to remove extra zero 
    float mynum = 4.5;
    printf("%.2f\n",mynum);
    printf("%.3f\n",mynum);
    printf("%.4f\n",mynum);


    int my_int_num = 3;
    printf("%d\n",my_int_num);
    printf("%.2d\n",my_int_num);
    printf("%.3d\n",my_int_num);


    double my_double_num = 4.4534;
    printf("%d\n",my_double_num);
    printf("%.2d\n",my_double_num);
    printf("%.3d\n",my_double_num);
    printf("%.4d\n",my_double_num);

    int myint;
    float myfloat;
    double mydouble;
    char mychar;

    printf("%zu\n",sizeof(myint));
    printf("%zu\n",sizeof(myfloat));
    printf("%zu\n",sizeof(mydouble));
    printf("%zu\n",sizeof(mychar));

    return 0;
}