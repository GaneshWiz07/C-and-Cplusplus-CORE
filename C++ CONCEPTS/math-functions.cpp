// Program demonstrating various mathematical functions available in C++
#include<iostream>
#include<cmath>  // Include cmath library for mathematical functions
using namespace std;

int main(){
    // Declare two double variables for mathematical operations
    double x=3.7;
    double y=4.2;
    
    // Basic mathematical functions
    cout<<"The square root of x is: "<<sqrt(x)<<endl;  // Calculate square root of x
    cout<<"The power of x and y is: "<<pow(x,y)<<endl;  // Calculate x raised to the power of y
    cout<<"The absolute value of x is: "<<abs(x)<<endl;  // Get absolute value of x
    
    // Rounding functions
    cout<<"The ceiling value of x is: "<<ceil(x)<<endl;  // Round up to nearest integer
    cout<<"The floor value of x is: "<<floor(x)<<endl;  // Round down to nearest integer
    cout<<"The round value of x is: "<<round(x)<<endl;  // Round to nearest integer
    
    // Logarithmic functions
    cout<<"The log value of x is: "<<log(x)<<endl;  // Natural logarithm (base e)
    cout<<"The log10 value of x is: "<<log10(x)<<endl;  // Logarithm base 10
    
    // Trigonometric functions (input in radians)
    cout<<"The sin value of x is: "<<sin(x)<<endl;  // Sine of x
    cout<<"The cos value of x is: "<<cos(x)<<endl;  // Cosine of x
    cout<<"The tan value of x is: "<<tan(x)<<endl;  // Tangent of x
    
    // Inverse trigonometric functions (output in radians)
    cout<<"The asin value of x is: "<<asin(x)<<endl;  // Arc sine of x
    cout<<"The acos value of x is: "<<acos(x)<<endl;  // Arc cosine of x
    cout<<"The atan value of x is: "<<atan(x)<<endl;  // Arc tangent of x
    
    return 0;  // Indicate successful program termination
}
