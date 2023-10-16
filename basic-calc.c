#include <stdio.h>
#include <math.h>

int main(){
    //calculating a side of a triangle. Hint: P. Theorem
    double A;
    double B;
    double C;
 
    printf("Enter the length of side A: ");
    scanf("%lf", &A);

    printf("Enter the length of side B: ");
    scanf("%lf", &B);

    C = sqrt((A*A) + (B*B));

    printf("Side C: %lf", C);


    return 0;
}