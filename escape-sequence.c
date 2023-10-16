#include <stdio.h>
int main(){
 
    /*
    %c = character
    %s = array of characters or strings
    %f = float
    %d = integer

    %.1 = decimal precision
    %1 = minimum field width
    %- = left alignment

    */
   float item1 = 45.34;
   float item2 = 234.45;
   float item3 = 34.00;

   printf("Item 1: $%-12.2f\n", item1); // '-' alignment to the left, '12' is minimum field width
   printf("Item 2: $%12.2f\n", item2);
   printf("Item 3: $%12.2f\n", item3);


    return 0;
}