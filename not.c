#include <stdio.h>
#include <stdbool.h>

int main(){
    // Logical operator = ! (NOT) reverses the state of the condition
    bool sunny = false;
    

    if(!sunny ==1 ){ //it's the same as 'sunny == true' or 'sunny'
        printf("\nThe weather is bad!\n");
    }
    else{
        printf("\nThe weather is good!\n");
    }
    return 0;
}