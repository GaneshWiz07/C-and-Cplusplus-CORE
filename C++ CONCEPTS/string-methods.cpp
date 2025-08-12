#include<iostream>
#include<string>
using namespace std;

int main(){
    string str="Hello World";
    cout<<"The length of the string is "<<str.length()<<endl;
    cout<<"The size of the string is "<<str.size()<<endl;
    cout<<"The capacity of the string is "<<str.capacity()<<endl;
    cout<<"The max size of the string is "<<str.max_size()<<endl;
    cout<<"The empty status of the string is "<<str.empty()<<endl;
    cout<<"The first character of the string is "<<str.front()<<endl;
    cout<<"The last character of the string is "<<str.back()<<endl;
    cout<<"The substring of the string is "<<str.substr(0,5)<<endl;
    cout<<"String compare: "<<str.compare("Hello World")<<endl;
    cout<<"String append: "<<str.append(" Hello World")<<endl;
    cout<<"String insert: "<<str.insert(0, "Hello ")<<endl;
    cout<<"String erase: "<<str.erase(0, 5)<<endl;
    cout<<"String replace: "<<str.replace(0, 5, "Hello")<<endl;
    cout<<"String find: "<<str.find("World")<<endl;
    cout<<"String rfind: "<<str.rfind("World")<<endl;
    cout<<"String find_first_of: "<<str.find_first_of("World")<<endl;
    cout<<"String find_last_of: "<<str.find_last_of("World")<<endl;
    cout<<"String find_first_not_of: "<<str.find_first_not_of("Hello")<<endl;
    cout<<"String find_last_not_of: "<<str.find_last_not_of("Hello")<<endl;
    cout<<"The string is "<<str<<endl;
    return 0;
}
