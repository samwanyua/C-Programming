#include <stdio.h>

int main (){

    char operator;
    double num1;
    double num2;
    double results;

    printf("\nEnter an operator (+ - / *): ");
    scanf("%c",&operator);

    printf("\nEnter number 1: ");
    scanf("%lf",&num1);

    printf("\nEnter number 2: ");
    scanf("%lf",&num2);

    switch (operator){
    case '+':
        results = num1 + num2;
        printf("Results: %lf\n", results);
        break;
    
    case '-':
        results = num1 - num2;
        printf("Results: %lf\n", results);
        break;
    
    case '*':
        results = num1 * num2;
        printf("Results: %lf\n", results);
        break;

    case '/':
        results = num1 / num2;
        printf("Results: %lf\n", results);
        break;
    
    default:
        printf("%c is not a valid operator!\n");
        break;
    }



    return 0;
}