#include <stdio.h>

int main (){
    //Switches are more efficient than 'else if statements'
    // They allow a value to be tested for equality against many cases
    char grade;
    printf("Enter a Grade: ");
    scanf("%c", &grade);

    switch (grade){
    case 'A':
        printf("Excellent\n");
        break;

    case 'B':
        printf("Good job\n");
        break;

    case 'C':
        printf("Nice try\n");
        break;
    
    case 'D':
        printf("Okay!\n");
        break;

    case 'E':
        printf("Do better!\n");
        break;

    case 'F':
        printf("Try again\n");
        break;
    
    default:
        printf("Please enter only a valid grade!\n");
       
    }

    return 0;
}