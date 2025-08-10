// Include necessary header files
#include<stdio.h>
#include<stdlib.h>

// Function declarations
int read_file();
int write_file();
int append_file();

// Main function - entry point of the program
int main(){
    read_file(); 
    write_file();
    append_file();
    // Call function to demonstrate file reading
    return 0;       // Return 0 to indicate successful program execution
}

// Function to demonstrate reading from a file
int read_file(){        
    FILE *file=fopen("file.txt","r");    // Open file in read mode
    if(file==NULL){
        printf("Error opening file\n");  // Handle file opening error
    }
    else{
        printf("File opened successfully\n");  // Confirm successful file opening
    }
    fclose(file);    // Close the file to free resources
    return 0;
}

// Function to demonstrate writing to a file
int write_file(){
    FILE *file=fopen("file.txt","w");    // Open file in write mode (overwrites existing content)
    if(file==NULL){
        printf("Error opening file\n");  // Handle file opening error
    }
    else{
        fprintf(file,"Hello, World!\n"); // Write text to the file
    }
    fclose(file);    // Close the file to save changes
}

// Function to demonstrate appending to a file
int append_file(){
    FILE *file=fopen("file.txt","a");    // Open file in append mode (adds to existing content)
    if(file==NULL){
        printf("Error opening file\n");  // Handle file opening error
    }
    else{
        fprintf(file,"Hello, World!\n"); // Append text to the file
    }
    fclose(file);    // Close the file to save changes
}