#include <stdio.h>

int main(){

    const double PI = 3.14159;

    double radius;
    double cirmuference;
    double area;
    
    printf("\nEnter the radius of the circle: ");
    scanf("%lf",&radius);
    
    cirmuference = 2 * PI * radius;
    area = PI * radius *radius;
    
    printf("The circumference of a circle is: %lf meters\n", cirmuference);
    printf("The area of a circle is: %lf square meters\n", area);


    return 0;
}