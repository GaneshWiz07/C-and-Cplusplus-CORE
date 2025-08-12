#include<iostream>
using namespace std;

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int division(int a, int b);
int mod(int a, int b);

int main(){
    cout<<"The sum of a and b is "<<add(10,20)<<endl;
    cout<<"The difference of a and b is "<<sub(10,20)<<endl;
    cout<<"The product of a and b is "<<mul(10,20)<<endl;
    cout<<"The quotient of a and b is "<<division(10,20)<<endl;
    cout<<"The remainder of a and b is "<<mod(10,20)<<endl;
    return 0;
}

int add(int a, int b){
    return a+b;
}

int sub(int a, int b){
    return a-b;
}

int mul(int a, int b){     
    return a*b;
}

int division(int a, int b){
    return a/b;
}

int mod(int a, int b){
    return a%b;
}       