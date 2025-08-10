// Include necessary header files
#include<stdio.h>
#include<stdlib.h>

// Define custom data types using typedef
typedef char *String;   // Define a new type 'String' as a pointer to char
typedef int Integer;    // Define a new type 'Integer' as an integer

// Main function - entry point of the program
int main(){
    // Declare and initialize variables using custom types
    String str="Hello";  // Declare a variable 'str' of type 'String'
    Integer num=10;      // Declare a variable 'num' of type 'Integer'
    
    // Display the values using printf
    printf("The value of str is %s\n", str);  // Print the value of 'str'
    printf("The value of num is %d\n", num);  // Print the value of 'num'
    
    return 0;  // Return 0 to indicate successful program execution
}