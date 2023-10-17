#include <stdio.h>

void birthday(char name [],int age ) //paraeters
{
   printf("Happy Birthday dear %s!\n",name); 
   printf("You are %d years old! \n", age); 
   
}

int main(){
    
    char name [] = "Max";
    int age = 23;
    
    birthday(name,age); // name and age are arguments

    return 0;
}