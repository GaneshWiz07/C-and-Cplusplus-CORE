// Program to demonstrate the use of namespaces in C++
#include<iostream>
using namespace std;

// Define first namespace with a variable named 'val'
namespace first{
    int val = 500;  // Variable 'val' in first namespace
}

// Define second namespace with a variable named 'val'
namespace second{
    int val = 100;  // Variable 'val' in second namespace
}

int main(){
    // Declare a local variable
    int val1;
    
    // Prompt user to enter a value
    cout<<"Enter the value of val1: ";
    cin>>val1;  // Read user input
    
    // Display the local variable value
    cout<<"The value of val1 is: "<<val1<<endl;
    
    // Access and display variable from first namespace using scope resolution operator
    cout<<"The value of val  for first namespace is: "<<first::val<<endl;
    
    // Access and display variable from second namespace using scope resolution operator
    cout<<"The value of val  for second namespace is: "<<second::val<<endl;
    
    return 0;  // Indicate successful program termination
}
