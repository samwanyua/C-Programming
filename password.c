#include <stdio.h>

int pass1;
int pass2;

int main (){
    printf("Create a password: ");
    scanf("%d",&pass1);

    printf("Confirm password: ");
    scanf("%d",&pass2); // Remember to add '&'

    if (pass1 == pass2){
        printf("Password successfully created!");
    }
    else{
        printf("Wrong Password!\n");
    }
    
    

    return 0;
}