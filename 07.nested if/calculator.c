#include <stdio.h>

int main()
 {
    printf("Welcome to calculator!\n");

    int num1, num2;
    char opp;

    // get first number
    printf("Enter the number1:\n");
    scanf("%d", &num1);

    // get second number
    printf("Enter the number2:\n");
    scanf("%d", &num2);

    // get operation
    printf("Enter the operation (+, -, *, /):\n");
    scanf(" %c", &opp);  // space before %c skips newline

    if (opp == '+') {
        printf("num1 = %d\n", num1);
        printf("num2 = %d\n", num2);
        printf("Addition: %d\n", num1 + num2);
    } 
    else if (opp == '-') {
        printf("num1 = %d\n", num1);
        printf("num2 = %d\n", num2);
        printf("Subtraction: %d\n", num1 - num2);
    } 
    else if (opp == '*') {
        printf("num1 = %d\n", num1);
        printf("num2 = %d\n", num2);
        printf("Multiplication: %d\n", num1 * num2);
    } 
    else if (opp == '/') {
        if (num2 != 0) {
            printf("num1 = %d\n", num1);
            printf("num2 = %d\n", num2);
            printf("Division: %d\n", num1 / num2);
        } else {
            printf("Error: Division by zero!\n");
        }
    } 
    else
    
    {
        printf("Invalid operator!\n");
    }

    return 0;
    getch();

}
