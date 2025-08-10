// Include necessary header files
#include<stdio.h>
#include<stdlib.h>

// Define an enumeration for days of the week
// By default, Monday=0, Tuesday=1, Wednesday=2, etc.
enum Days{
    Monday,      // 0
    Tuesday,     // 1
    Wednesday,   // 2
    Thursday,    // 3
    Friday,      // 4
    Saturday,    // 5
    Sunday       // 6
};

// Create a typedef for easier usage of the enum
typedef enum Days Days;

// Main function - entry point of the program
int main(){
    // Declare and initialize an enum variable using the full enum syntax
    enum Days day=Tuesday;
    printf("The day is %d\n", day);  // Print the numeric value (1 for Tuesday)
    
    // Declare and initialize using the typedef alias for cleaner syntax
    Days day2=Monday;
    printf("The day is %d\n", day2);  // Print the numeric value (0 for Monday)
    
    return 0;  // Return 0 to indicate successful program execution
}