#include <stdio.h>
#include <ctype.h> // String function

int main(){
    char unit;
    float temp;

    printf("Is temperature in F or C?");
    scanf("%c",&unit);

    unit = toupper (unit); //To make uppercase
    
    if(unit == 'C'){
        printf("Enter temperature in Celsius:  ");
        scanf("%f",&temp);
        temp = (temp * 9/5) + 32;
        printf("\nThe temperature in Fahrenheit is: %0.2f\n", temp);
    }
    
    else if(unit == 'F'){
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f",&temp);
        temp = ((temp - 32) * 5)/9;
        printf("\nThe temperature in Celsius is: %0.2f\n", temp);
    }

    else{
        printf("\n %c is not a valid measurement\n", unit);
    }
    
    
    return 0;
}
