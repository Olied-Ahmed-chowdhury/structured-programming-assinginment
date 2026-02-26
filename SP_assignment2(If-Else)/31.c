#include <stdio.h>
int main() {
    float num1,num2;
    char operator;
    printf("Enter two numbers and an operator (+, -, *, /): ");
    scanf("%f %f %c", &num1,&num2,&operator);

    if (operator == '+') {
        printf("Result: %.2f\n", num1+num2);
    } else if (operator == '-') {
        printf("Result: %.2f\n", num1-num2);
    } else if (operator == '*') {
        printf("Result: %.2f\n", num1*num2);
    } else if (operator == '/') {
        if (num2 != 0) {
            printf("Result: %.2f\n", num1/num2);
        } else {
            printf("Error: Division by zero\n");
        }
    } else {
        printf("Invalid operator\n");
    }

    return 0;
}

