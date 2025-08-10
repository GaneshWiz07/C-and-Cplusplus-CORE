// Include necessary header files
#include <stdio.h>   // For input/output functions like printf
#include <stdlib.h>  // For standard library functions
#include <stdbool.h> // For boolean data type support

int main() {
    // Integer variables demonstration
    int a = 10;
    int b = 20;
    int c = a + b;  // Addition of two integers
    printf("c = %d\n", c);

    // Float variable demonstration
    float d = 5.655;
    printf("d = %.2f\n", d);  // Print with 2 decimal places

    // Double variable demonstration (higher precision than float)
    double pi = 3.14159265358979323846;
    printf("pi = %.15f\n", pi);  // Print with 15 decimal places

    // Character variables demonstration
    char ch = 'A';  // Character literal
    printf("ch = %c\n", ch);
    char ch2 = 65;  // ASCII value of 'A'
    printf("ch2 = %c\n", ch2);

    // String (character array) demonstration - Method 1: String literal
    char Name[] = "Ganesh";
    printf("Your Name is %s\n", Name);
    printf("Your Name first letter is %c\n", Name[0]);  // Access first character
    
    // String (character array) demonstration - Method 2: Character array initialization
    char Name2[] = {'G', 'a', 'n', 'e', 's', 'h', '\0'};  // Null terminator required
    printf("Your Name is %s\n", Name2);
    printf("Your Name first letter is %c\n", Name2[0]);  // Access first character

   // Boolean variable demonstration
   bool isVerified=true;
   if(isVerified){
    printf("You are verified\n");
   }
   else{
    printf("You are not verified\n");
   }

}
