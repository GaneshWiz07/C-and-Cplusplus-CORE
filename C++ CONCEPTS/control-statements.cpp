#include<iostream>
using namespace std;


int main(){
    int a=10;
    int b=20;
    //single if statement
    if(a>b){
        cout<<"a is greater than b"<<endl;
    }
    //if-else statement
    if(a>b){
        cout<<"a is greater than b"<<endl;
    }
    else{
        cout<<"b is greater than a"<<endl;
    }
    //nested if-else statement
    //else-if statement
    if(a>b){
        cout<<"a is greater than b"<<endl;
    }
    else if(a<b){
        cout<<"b is greater than a"<<endl;
    }
    else{
        cout<<"a is equal to b"<<endl;  
    }
    //switch statement
    switch(a){
        case 1:
            cout<<"a is 1"<<endl;
            break;
        case 2:
            cout<<"a is 2"<<endl;
            break;
        default:
            cout<<"a is not 1 or 2"<<endl;
            break;
    }
}