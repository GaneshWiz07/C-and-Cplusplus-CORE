// Include necessary header files
#include<stdio.h>
#include<stdlib.h>

// Main function - entry point of the program
int main(){
    // Dynamically allocate memory for 4 integers using calloc (initializes to zero)
    int *ptr=calloc(4,sizeof(int));
    
    // Print the initial values (should all be 0 due to calloc initialization)
    printf("Initial values (calloc initializes to zero):\n");
    for(int i=0;i<4;i++){
        printf("%d\n",ptr[i]);
    }
    
    // Get input values from user and store in dynamically allocated memory
    printf("Enter 4 integers:\n");
    for(int i=0;i<4;i++){
        scanf("%d",&ptr[i]);
    }
    
    // Print the user-entered values
    printf("Values entered by user:\n");
    for(int i=0;i<4;i++){
        printf("%d\n",ptr[i]);
    }
    
    // Free the dynamically allocated memory to prevent memory leaks
    free(ptr);
    
    return 0;    // Return 0 to indicate successful program execution
}