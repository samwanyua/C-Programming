#include <stdio.h>

void hello (char name[], int age); //THis is a function prototype!  ---Remember to include data type

int main(){
    //function prototype is a function declaration without a body before the main()
    //Ensures that calls  to a function are done with correct arguments
    //funtion prototypes enables the compilers to flag an error if the arguments are missing

    char name[] = "Sam";
    int age = 43;

    hello(name,age); //don't forget to add the arguments 

    return 0;
}

void hello(char name[], int age) //Remember to include data type as you put in the parameters
{
    printf("\nHello %s", name);
    printf("\nYou are %d years old!\n", age);
}