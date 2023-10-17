#include <stdio.h>
#include <stdbool.h>

int main(){
    // || checks atleast if one condition is true
    float temp = 21;
    

    if(temp <=0 || temp >= 30 ){
        printf("\nThe weather is bad!\n");
    }
    else{
        printf("\nThe weather is good!\n");
    }
    return 0;
}