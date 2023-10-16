#include <stdio.h>
#include <math.h>

int main(){

    double a = sqrt(9); //squareroot
    double b = pow(4,4); //power
    int c = round(4.2344); //round off
    int d = ceil(3.23); //round a number up
    int e = floor(3.37); // round a number down
    double f = fabs(-789); //How far a number is from zero
    double g = log(4); //logarithms 
    double h = sin(45);
    double i = tan(45);
    double j = cos(45);

    printf("%lf\n",a);
    printf("%lf\n",b);
    printf("%d\n",c);
    printf("%d\n",d);
    printf("%d\n",e);
    printf("%lf\n",f);
    printf("%lf\n",g);
    printf("%lf\n",h);
    printf("%lf\n",i);
    printf("%lf\n",j);

    //Don't forget to include the header file #include <math.h>





    return 0;
}