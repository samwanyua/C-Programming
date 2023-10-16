#include <stdio.h>

int main () {

    int age;

    printf("Enter your age: ");
    scanf("%d",&age);

    if (age >= 18) {
        printf("You are an adult\n");
    }

    else if (age <0){
        printf("Please provide appropriate data!\n");
    }
  
     else if (age == 0){
    printf("You are too young to sign up!\n");
     }
     
    else {
        printf("You have are yet to be called an adult!\n");
    }


    return 0;
}