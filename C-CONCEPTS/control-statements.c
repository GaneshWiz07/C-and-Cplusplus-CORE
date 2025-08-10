// Include necessary header files
#include<stdio.h>
#include<stdlib.h>

// Function declarations for different control statement demonstrations
int if_else();
int if_else_if_else();
int switch_case();
int ternary_operator();

int main(){
    // Demonstrate basic if statement
    int a=10;
    if(a>5){
        printf("A is greater than 5\n");
    }
    return 0;
}

// Function to demonstrate if-else statement
int if_else(){      
    int a=10;
    if(a>5){
        printf("A is greater than 5\n");
    }
    else{
        printf("A is not greater than 5\n");
    }
    return 0;
}

// Function to demonstrate if-else if-else statement (multiple conditions)
int if_else_if_else(){
    int a=10;
    if(a>5){
        printf("A is greater than 5\n");
    }
    else if(a==5){
        printf("A is equal to 5\n");
    }
    else{
        printf("A is not greater than 5\n");    
    }
    return 0;
}

// Function to demonstrate switch-case statement
int switch_case(){
    int a=10;
    switch(a){
        case 10:
            printf("A is 10\n");    
            break;  // Break to prevent fall-through
        case 20:
            printf("A is 20\n");
            break;  // Break to prevent fall-through
        default:
            printf("A is not 10 or 20\n");  // Default case for unmatched values
    }
    return 0;
}

// Function to demonstrate ternary operator (conditional operator)
int ternary_operator(){
    int a=10;
    int b=20;
    // Ternary operator: condition ? value_if_true : value_if_false
    int c=(a>b)?a:b;
    printf("The greater number is %d\n", c);
    return 0;
}