// Program demonstrating different types of type conversion in C++
#include<iostream>
using namespace std;

int main(){
    // Implicit type conversion (automatic conversion by compiler)
    // ASCII value 100 corresponds to character 'd'
    char a=100;
    cout<<"Character value: "<<a<<endl;  // Prints 'd'
    
    // Explicit type conversion using C-style cast
    // Converting char to int to get the ASCII value
    int b=int(a);
    cout<<"ASCII value using C-style cast: "<<b<<endl;  // Prints 100
    
    // Type casting using static_cast (C++ style cast)
    // More type-safe way to convert char to int
    int c=static_cast<int>(a);
    cout<<"ASCII value using static_cast: "<<c<<endl;  // Prints 100
    
    return 0;
}