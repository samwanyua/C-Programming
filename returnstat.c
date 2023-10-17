#include <stdio.h>

double square(double x)
{
    double result = x * x;
    return result;
}

int main(){
    double x = square(37678687.234);
    printf("%lf\n",x);

    return 0;
}