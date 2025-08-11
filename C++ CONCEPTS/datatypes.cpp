// Program to demonstrate different data types in C++
#include <iostream>
using namespace std;

int main()
{
    // Integer data type - stores whole numbers
    int a = 10;
    
    // Float data type - stores decimal numbers with single precision
    float b = 10.5;
    
    // Double data type - stores decimal numbers with double precision
    double c = 10.5;
    
    // Character data type - stores a single character
    char d = 'a';
    
    // Boolean data type - stores true or false values
    bool e = true;

    // String data type - stores a sequence of characters
    string f = "Hello";
    
    // Display the values of different data types
    cout << a << endl;  // Output integer value
    cout << b << endl;  // Output float value
    cout << c << endl;  // Output double value
    cout << d << endl;  // Output character value
    cout << e << endl;  // Output boolean value (1 for true, 0 for false)
    cout << f << endl;  // Output string value
    return 0;  // Indicate successful program termination
}