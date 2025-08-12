// Program to demonstrate standard input and output operations
#include<iostream>
#include<string>
using namespace std;

// Function declarations
int const_keyword();
int Getline();

int main(){
    // Declare two integer variables to store user input
    int a,b;
    
    // Prompt user to enter the first number
    cout<<"Enter the value of a: ";
    cin>>a;  // Read the first number from user
    
    // Prompt user to enter the second number
    cout<<"Enter the value of b: ";
    cin>>b;  // Read the second number from user
    
    // Calculate and display the sum of both numbers
    cout<<"The sum of a and b is: "<<a+b<<endl;
    
    // Call function to demonstrate const keyword
    const_keyword();
    
    // Clear the input buffer before calling getline
    // This removes any leftover newline character from previous cin operations
    cin.ignore();
    
    // Call function to demonstrate getline for string input
    Getline();
    
    return 0;  // Indicate successful program termination
}

// Function to demonstrate the const keyword usage
int const_keyword(){
    const int a = 10; // Declare a constant integer with value 10
    cout<<"Constant value: "<<a<<endl;  // Display the constant value
    return 0;  // Return 0 to indicate successful execution
}

// Function to demonstrate getline for reading strings with spaces
int Getline(){
    string name;
    
    // Prompt user for their full name
    cout<<"What is your full name?"<<endl;
    
    // Use getline to read the entire line including spaces
    getline(cin,name);
    
    // Display the entered name
    cout<<"Your name is "<<name<<endl;
    
    return 0;  // Return 0 to indicate successful execution
}
