// Include necessary header files
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

// Function declaration
int short_hand_operator();
int logical_operator();
int bitwise_operator(); 

int main(){
        // Initialize variables
        int a=10;
        int b=20;
        
        // Arithmetic operators demonstration
        printf(" Addition of %d and %d = %d\n", a,b,a+b);
        int d=a-b;
        printf("Subtraction of %d and %d = %d\n", a,b,d);
        int e=a*b;
        printf("Multiplication of %d and %d = %d\n", a,b,e);
        int f=a/b;
        printf("Division of %d and %d = %d\n", a,b,f);
        int g=a%b;
        printf("Modulus of %d and %d = %d\n", a,b,g);
        
        // Increment/Decrement operators demonstration
        int h=a++;  // Post-increment
        printf(" Post Increment of %d = %d\n", a,h);
        int i=a--;  // Post-decrement
        printf(" Post Decrement of %d = %d\n", a,i);
        int j=++a;  // Pre-increment
        printf(" Pre Increment of %d = %d\n", a,j);
        int k=--a;  // Pre-decrement
        printf(" Pre Decrement of %d = %d\n", a,k);
        
        printf("--------------------------------\n");
        printf("SHORT HAND OPERATOR\n");
        short_hand_operator();
        return 0;
}

// Function to demonstrate logical operators
int logical_operator(){
    int a=10;
    int b=20;
    
    // Logical AND (&&) - returns 1 if both operands are non-zero, 0 otherwise
    printf("Logical AND of %d and %d = %d\n", a,b,a&&b);
    
    // Logical OR (||) - returns 1 if at least one operand is non-zero, 0 otherwise
    printf("Logical OR of %d and %d = %d\n", a,b,a||b);
    
    // Logical NOT (!) - returns 1 if operand is zero, 0 if operand is non-zero
    printf("Logical NOT of %d = %d\n", a,!a);
    return 0;
}

// Function to demonstrate bitwise operators
int bitwise_operator(){
    int a=10;  // Binary: 1010
    int b=20;  // Binary: 10100
    
    // Bitwise AND (&) - performs AND operation on each bit
    printf("Bitwise AND of %d and %d = %d\n", a,b,a&b);
    
    // Bitwise OR (|) - performs OR operation on each bit
    printf("Bitwise OR of %d and %d = %d\n", a,b,a|b);
    
    // Bitwise XOR (^) - performs XOR operation on each bit
    printf("Bitwise XOR of %d and %d = %d\n", a,b,a^b);
    return 0;
}

// Function to demonstrate shorthand operators
int short_hand_operator(){
    int a=10;
    int b=20;
    
    // Shorthand operators demonstration
    a+=b;  // a = a + b
    printf("Addition of %d and %d = %d\n", a,b,a);
    a-=b;  // a = a - b
    printf("Subtraction of %d and %d = %d\n", a,b,a);
    a*=b;  // a = a * b
    printf("Multiplication of %d and %d = %d\n", a,b,a);
    a/=b;  // a = a / b
    printf("Division of %d and %d = %d\n", a,b,a);
    a%=b;  // a = a % b
    printf("Modulus of %d and %d = %d\n", a,b,a);
    return 0;
}