#include <stdio.h>
#include <stdbool.h>

int main(){

    float temp = 21;
    bool sunny = false;

    if(temp >=0 && temp <= 30 && sunny ){
        printf("\nThe weather is good!\n");
    }
    else{
        printf("\nThe weather is bad!\n");
    }
    return 0;
}