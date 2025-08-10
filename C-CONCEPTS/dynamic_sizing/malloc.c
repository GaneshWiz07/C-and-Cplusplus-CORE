// Include necessary header files
#include<stdio.h>
#include<stdlib.h>

// Main function - entry point of the program
int main(){
    // Initialize a static array with 4 integers
    int Nums[4]={1,2,3,4};
    
    // Dynamically allocate memory for 4 integers using malloc
    int *ptr=malloc(4*sizeof(int));
    
    // Copy values from static array to dynamically allocated memory
    for(int i=0;i<4;i++){
        ptr[i]=Nums[i];
    }
    
    // Print the values stored in dynamically allocated memory
    for(int i=0;i<4;i++){
        printf("%d\n",ptr[i]);
    }
    
    // Free the dynamically allocated memory to prevent memory leaks
    free(ptr);
    
    return 0;    // Return 0 to indicate successful program execution
}