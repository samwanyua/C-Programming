#include <stdio.h>
#include <stdbool.h>

int main(){
     
     char a = 'c'; //Single character %c
     char b[] = "Hello world"; // array of characters %s
     float c = 3.141592; // 4 bytes (32 bit precision) 6 -7 digits, %f
     double d = 3.141592653589793; // 8 bytes (64 bits precision) 15-16 digits, %lf
     bool e = true; //1 byte (True or false) %d. PS: Remember to add #include <stdbool.h> 
     char f = 100; //1 byte (-128 to +127) %d or %c
     unsigned char g = 255; // 1 byte (0 to +255) %d or %c
     short int h = 32767; // 2 bytes ( -32767 to +32767) %d
     unsigned short int i = 65535; //2 bytes ( 0 to +65535) %d
     int j = 2147483647; // 4 bytes ( -2147483648 to +2147482647) %d
     unsigned int k = 4294967295; // 4 byte (0 to +4294967295) %u
     long long int l = 9223372036854775807; //8 bytes (- 9 quintillion to +9 quintillion) %lld
     unsigned long long int m = 18446744973709551615; //8 byte ( 0  to +18 quintillion) %llu

    printf("%c\n",a); //char
    printf("%s\n", b); //character arrays
    printf("%f\n", c); //float
    printf("%0.15lf\n",d); //double
    printf("%d\n", e); //Booleans
    printf("%c\n",f); //charas numeric value
    printf("%d\n",g); //unsigned char as a numeric value
    printf("%d\n",h); //short int
    printf("%d\n", i); //unsigned sort int
    printf("%d\n", j); //integer
    printf("%u\n", k); //unsigned int
    printf("%lld\n", l); //long long int
    printf("%llu\n", m); //unsigned long long int
    
     return 0;




}