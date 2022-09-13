#include <stdio.h>

int main() {
    
    char operator;
    double num1;
    double num2;
    double result;

    printf("\nEnter an operator (+ - * /): ");
    scanf("%c", &operator);

    if (operator == '+' || operator == '-' || operator == '*' || operator == '/') {
        printf("\nEnter number 1: ");
        scanf("%lf", &num1);

        printf("\nEnter number 2: ");
        scanf("%lf", &num2);

        switch(operator) {
        case '+':
            result = num1 + num2;
            printf("\nresult: %.2lf", result);
            break;
        case '-':
            result = num1 - num2;
            printf("\nresult: %.2lf", result);
            break;
        case '*':
            result = num1 * num2;
            printf("\nresult: %.2lf", result);
            break;
        case '/':
            result = num1 / num2;
            printf("\nresult: %.2lf", result);
            break;
        
        default:
            
            break;
        }
    } else {
        printf("\n%c is not valid", operator);
    }

    return 0;
}