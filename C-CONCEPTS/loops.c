// Include necessary header files
#include<stdio.h>
#include<stdlib.h>

// Function declarations for different loop demonstrations
int for_loop();
int while_loop();
int do_while_loop();
int nested_loop();
int break_statement();
int continue_statement();
int goto_statement();

int main(){
    // Demonstrate basic for loop - prints numbers 0 to 9
    int i;
    for(i=0;i<10;i++){
        printf("%d\n", i);
    }
    return 0;
}

// Function to demonstrate while loop
int while_loop(){
    int i=0;
    // While loop continues as long as condition is true
    while(i<10){
        printf("%d\n", i);
        i++;  // Increment counter to avoid infinite loop
    }
    return 0;
}

// Function to demonstrate do-while loop
int do_while_loop(){
    int i=0;
    // Do-while loop executes at least once, then checks condition
    do{
        printf("%d\n", i);
        i++;  // Increment counter
    }while(i<10);  // Condition checked after execution
    return 0;
}

// Function to demonstrate nested loops
int nested_loop(){   
    int i,j;
    // Outer loop runs 10 times
    for(i=0;i<10;i++){
        // Inner loop runs 10 times for each outer loop iteration
        for(j=0;j<10;j++){
            printf("%d %d\n", i, j);  // Print both loop counters
        }
    }
    return 0;
}

// Function to demonstrate break statement
int break_statement(){
    int i;
    for(i=0;i<10;i++){
        if(i==5){
            break;  // Exit loop when i equals 5
        }
        printf("%d\n", i);  // This will print 0,1,2,3,4 only
    }
    return 0;
}

// Function to demonstrate continue statement
int continue_statement(){
    int i;
    for(i=0;i<10;i++){
        if(i==5){
            continue;  // Skip current iteration when i equals 5
        }
        printf("%d\n", i);  // This will print 0,1,2,3,4,6,7,8,9 (skips 5)
    }
    return 0;
}

// Function to demonstrate goto statement (generally discouraged)
int goto_statement(){
    int i=0;
    start:  // Label for goto statement
    printf("%d\n", i);
    i++;
    if(i<10)
        goto start;  // Jump back to 'start' label if condition is true
    return 0;
}