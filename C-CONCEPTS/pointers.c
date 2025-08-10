// Include necessary header files
#include<stdio.h>
#include<stdlib.h>

// Function to demonstrate pointer to integer
int pointer_to_integer(){
    int a=10;                    // Declare and initialize an integer variable
    int *ptr=&a;                 // Declare a pointer and assign address of 'a'
    printf("The value of a is %d\n", ptr);  // Print the address stored in pointer
    return 0;
}

// Function to demonstrate pointer to array
int pointer_to_array(){ 
    int arr[5]={1,2,3,4,5};      // Declare and initialize an integer array
    int *ptr=arr;                // Pointer to array (arr is equivalent to &arr[0])
    printf("The value of the array is %d\n", ptr);  // Print the base address of array
    return 0;
}

// Function to demonstrate pointer to string
int pointer_to_string(){
    char str[]="Hello";          // Declare and initialize a character array (string)
    char *ptr=&str;              // Pointer to the address of the string array
    printf("The value of the string is %s\n", ptr);  // Print the string using pointer
    return 0;
}

// Function to demonstrate null pointer
int null_pointer(){
    int *ptr=NULL;               // Initialize pointer to NULL (no valid address)
    printf("The value of the pointer is %d\n", ptr);  // Print NULL pointer value
    return 0;
}


// Main function - entry point of the program
int main(){
    pointer_to_integer();       // Call function to demonstrate integer pointer
    pointer_to_array();         // Call function to demonstrate array pointer
    pointer_to_string();        // Call function to demonstrate string pointer
    null_pointer();             // Call function to demonstrate null pointer
    return 0;                   // Return 0 to indicate successful program execution
}