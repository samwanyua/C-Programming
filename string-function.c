#include <stdio.h>
#include <string.h>
#include <ctype.h> // Include the ctype.h header for the tolower and toupper functions

int main() {
    char string1[] = "Hello";
    char string2[] = "World";

    // Convert to lowercase
    /*for (int i = 0; string1[i]; i++) {
        string1[i] = tolower(string1[i]);
    }

    // Convert to uppercase
    for (int i = 0; string1[i]; i++) {
        string1[i] = toupper(string1[i]);
    }*/

    //strcat(string1,string2); //Append string2 at the end of string1
    //strncat(string1,string2, 1); // Appends n characters from string2 to string1
    //strcpy(string1,string2); // Copies string2 to string1
    //strncpy(string1,string2,1); // Copies n character of string2 to string1

    //strset(string1, '?'); // Sets all characters of a string to a given character
    //strnset(string1, 'x',1); //sets first n character of a string to a given character
    //strrev(string1); // REverses a string

    //printf("%s\n", string1);
    
    //int result = strlen(string1); // returns string length as an int
    //int result = strcmp(string1,string2); //string compares all the characters
    //int result = strncmp(string1,string2,1); // Compares n characters
    //int result = strcmpi(string1,string2); // String compares all (ignore case)
    //int result = strnicmp(string1,string1,1); // String compares n characters (ignore case)


    printf("%d",result);

   /* if(result == 0){
        printf("The strings are the same!\n");
    }
    else{
        printf("The strings are not the same!\n");
    }
    */




    
    
    
    

    return 0;
}
