// Program to demonstrate standard input and output operations
#include<iostream>
using namespace std;
int const_keyword();
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
    cout<<"The sum of a and b is: "<<a+b;
    const_keyword();
    return 0;  // Indicate successful program termination
}


// Function to demonstrate the const keyword usage
int const_keyword(){
    const int a = 10;  // Declare a constant integer with value 10
    cout<<a;  // Output the constant value
    return 0;  // Return 0 to indicate successful execution
}

