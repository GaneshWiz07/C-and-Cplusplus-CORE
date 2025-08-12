// Program demonstrating polymorphism in C++
#include<iostream>
using namespace std;

// Base class with virtual function
class Student{
    public:
     int age;
     string name;
     
     // Virtual function to enable polymorphism
     virtual void show(){
        cout<<"Student"<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Name: "<<name<<endl;
     }
     
     // Constructor to initialize student data
     Student(int a, string n){
         age = a;
         name = n;
     }
};

// Derived class that overrides the virtual function
class Programmer:public Student{
    public:
    string role;
    
    // Constructor to initialize programmer data
    Programmer(int a, string n, string r) : Student(a, n){
        role = r;
    }
    
    // Override the show function (polymorphism)
    void show() override{
        cout<<"Programmer"<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Role: "<<role<<endl;
    }
};

int main(){
    // Create objects
    Student s(20, "John");
    Programmer p(25, "Jane", "Software Engineer");
    
    // Demonstrate polymorphism using base class pointers
    Student* ptr1 = &s;
    Student* ptr2 = &p;  // Base class pointer pointing to derived object
    
    cout<<"Using polymorphism with base class pointers:"<<endl;
    ptr1->show();  // Calls Student's show()
    cout<<endl;
    ptr2->show();  // Calls Programmer's show() due to virtual function
    cout<<endl;
    
    // Direct object calls
    cout<<"Direct object calls:"<<endl;
    s.show();
    cout<<endl;
    p.show();
    
    return 0;
}