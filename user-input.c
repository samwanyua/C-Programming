#include <stdio.h>
#include <string.h> //in order to work with strings

int main(){
     char name [25]; // 25 is bytes
     int age;
     
    printf("What is your name?");
    //scanf("%s", &name); 
    fgets(name, 25, stdin); //To include a whitespace. Lets say first and last name. It introduces a new line character.
    name[strlen(name)-1] = '\0'; //To get rid of the new line


     printf("\nHow old are you?\n"); //printf is used to display output
     scanf("%d", &age); // scanf is used to read input (without whitespace). NB Precede the varaible wit '&'

     printf("\nHello %s, how are you?\n", name);
     printf("You are %d years old.\n", age);
 




    return 0;
}