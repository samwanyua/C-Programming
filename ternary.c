#include <stdio.h>

int findMax(int x, int y)
{
   /* if (x > y)
    {
        return x;
    }
    else 
    {
        return y;
    }
    */
   return(x > y) ? x : y;  //it's a shortcut to the above if/else statements
}

int main (){
    //Ternary operator = shortcut to if/else statements when assigning or returning  a value
    // (condition) ? value if true : value if false

    int max = findMax(93,4);
    printf("%d\n", max);

    return 0;
}