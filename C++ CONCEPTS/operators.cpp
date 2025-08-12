// Program demonstrating various operators in C++
#include<iostream>
using namespace std;

// Function declarations
int short_hand_operator();
int increment_decrement_short_hand_operator();
int logical_operator();
int bitwise_operator();
int relational_operator();
int ternary_operator();

int main(){
    // Initialize two variables for demonstration
    int a=10;
    int b=20;
    
    // Basic arithmetic operators
    cout<<"a+b="<<a+b<<endl;  // Addition
    cout<<"a-b="<<a-b<<endl;  // Subtraction
    cout<<"a*b="<<a*b<<endl;  // Multiplication
    cout<<"a/b="<<a/b<<endl;  // Division (integer division)
    cout<<"a%b="<<a%b<<endl;  // Modulus (remainder)
    cout<<"--------------------------------"<<endl;
    cout<<"RELATIONAL OPERATOR"<<endl;
    relational_operator();
    cout<<"--------------------------------"<<endl;
    cout<<"LOGICAL OPERATOR"<<endl;
    logical_operator();
    cout<<"--------------------------------"<<endl;
    cout<<"TERNARY OPERATOR"<<endl;
    ternary_operator();
    cout<<"--------------------------------"<<endl;
    cout<<"BITWISE OPERATOR"<<endl;
    bitwise_operator();
    cout<<"--------------------------------"<<endl;    
    cout<<"SHORT HAND OPERATOR"<<endl;
    short_hand_operator();
    cout<<"--------------------------------"<<endl;
    cout<<"INCREMENT/DECREMENT OPERATOR"<<endl;
    increment_decrement_short_hand_operator();
    cout<<"--------------------------------"<<endl;
    return 0;
}

// Function demonstrating shorthand assignment operators
int short_hand_operator(){
    int a=10;
    int b=20;
    
    // Addition assignment operator
    a+=b;  // Equivalent to a = a + b
    cout<<"a+=b="<<a<<endl;
    
    // Subtraction assignment operator
    a-=b;  // Equivalent to a = a - b
    cout<<"a-=b="<<a<<endl;
    
    // Multiplication assignment operator
    a*=b;  // Equivalent to a = a * b
    cout<<"a*=b="<<a<<endl;
    
    // Division assignment operator
    a/=b;  // Equivalent to a = a / b
    cout<<"a/=b="<<a<<endl;
    
    // Modulus assignment operator
    a%=b;  // Equivalent to a = a % b
    cout<<"a%=b="<<a<<endl;
    
    // Bitwise AND assignment operator
    a&=b;  // Equivalent to a = a & b
    cout<<"a&=b="<<a<<endl;
    
    // Bitwise OR assignment operator
    a|=b;  // Equivalent to a = a | b
    cout<<"a|=b="<<a<<endl;
    
    // Bitwise XOR assignment operator
    a^=b;  // Equivalent to a = a ^ b
    cout<<"a^=b="<<a<<endl;
    
    // Right shift assignment operator
    a>>=b;  // Equivalent to a = a >> b
    cout<<"a>>=b="<<a<<endl;
    
    // Left shift assignment operator
    a<<=b;  // Equivalent to a = a << b
    cout<<"a<<=b="<<a<<endl;
    
    // Call function to demonstrate increment/decrement operators
    increment_decrement_short_hand_operator();
    return 0;
}

// Function demonstrating increment and decrement operators
int increment_decrement_short_hand_operator(){
    int a=10;
    
    // Post-increment: returns current value, then increments
    cout<<"a++="<<a++<<endl;  // Prints 10, then a becomes 11
    
    // Pre-increment: increments first, then returns new value
    cout<<"++a="<<++a<<endl;  // a becomes 12, then prints 12
    
    // Post-decrement: returns current value, then decrements
    cout<<"a--="<<a--<<endl;  // Prints 12, then a becomes 11
    
    // Pre-decrement: decrements first, then returns new value
    cout<<"--a="<<--a<<endl;  // a becomes 10, then prints 10
    
    return 0;
}

int logical_operator(){
    int a=10;
    int b=20;
    cout<<"a>b="<<(a>b)<<endl;
    cout<<"a<b="<<(a<b)<<endl;
    cout<<"a>=b="<<(a>=b)<<endl;
    cout<<"a<=b="<<(a<=b)<<endl;
    cout<<"a==b="<<(a==b)<<endl;
    cout<<"a!=b="<<(a!=b)<<endl;
}

int ternary_operator(){
    int a=10;
    int b=20;
    int c=(a>b?a:b);
    cout<<"c="<<c<<endl;
}   

int bitwise_operator(){
    int a=10;
    int b=20;
    cout<<"a&b="<<(a&b)<<endl;
    cout<<"a|b="<<(a|b)<<endl;
    cout<<"a^b="<<(a^b)<<endl;
    cout<<"~a="<<(~a)<<endl;
    cout<<"a<<b="<<(a<<b)<<endl;
    cout<<"a>>b="<<(a>>b)<<endl;
}

int relational_operator(){
    int a=10;
    int b=20;
    cout<<"a>b="<<(a>b)<<endl;
    cout<<"a<b="<<(a<b)<<endl;
    cout<<"a>=b="<<(a>=b)<<endl;
    cout<<"a<=b="<<(a<=b)<<endl;
    cout<<"a==b="<<(a==b)<<endl;
    cout<<"a!=b="<<(a!=b)<<endl;
}
