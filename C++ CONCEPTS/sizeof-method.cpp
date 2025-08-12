#include<iostream>
using namespace std;

int main(){
    double a=10.5;
    cout<<"Size of the variable a is "<<sizeof(a)<<endl;
    int b=10;
    cout<<"Size of the variable b is "<<sizeof(b)<<endl;
    char c='a';
    cout<<"Size of the variable c is "<<sizeof(c)<<endl;
    float d=10.5;
    cout<<"Size of the variable d is "<<sizeof(d)<<endl;
    bool e=true;
    cout<<"Size of the variable e is "<<sizeof(e)<<endl;
    short f=10;
    cout<<"Size of the variable f is "<<sizeof(f)<<endl;
    long g=10;
    cout<<"Size of the variable g is "<<sizeof(g)<<endl;
    long long h=10;
    cout<<"Size of the variable h is "<<sizeof(h)<<endl;
    long double i=10.5;
    cout<<"Size of the variable i is "<<sizeof(i)<<endl;
    int j[5]={1,2,3,4,5};
    cout<<"Size of the array j is "<<sizeof(j)<<endl;
    return 0;
}