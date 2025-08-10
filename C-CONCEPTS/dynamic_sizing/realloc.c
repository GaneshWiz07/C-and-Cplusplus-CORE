// Include necessary header files
#include<stdio.h>
#include<stdlib.h>

// Main function - entry point of the program
int main(){
    // Dynamically allocate memory for 4 integers using malloc
    int *ptr=malloc(4*sizeof(int));
    
    // Get input values from user for the initial 4 integers
    printf("Enter 4 integers:\n");
    for(int i=0;i<4;i++){
        scanf("%d",&ptr[i]);
    }
    
    // Print the initial 4 values
    printf("Initial 4 values:\n");
    for(int i=0;i<4;i++){
        printf("%d\n",ptr[i]);
    }
    
    // Reallocate memory to expand from 4 to 8 integers (preserves existing data)
    ptr=realloc(ptr,8*sizeof(int));
    
    // Get input values from user for all 8 integers (including the original 4)
    printf("Enter 8 integers (including the original 4):\n");
    for(int i=0;i<8;i++){
        scanf("%d",&ptr[i]);
    }
    
    // Print all 8 values after reallocation
    printf("All 8 values after reallocation:\n");
    for(int i=0;i<8;i++){
        printf("%d\n",ptr[i]);
    }
    
    // Free the dynamically allocated memory to prevent memory leaks
    free(ptr);
    
    return 0;    // Return 0 to indicate successful program execution
}
