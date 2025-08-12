// Program demonstrating the use of classes and objects in C++
#include<iostream>
using namespace std;

// Define a class to represent a Human
class Human{
    public:
    // Data members (attributes)
    string name;        // Human's name
    string occupation;  // Human's occupation
    int age;           // Human's age

    // Member functions (methods)
    void eat(){
        cout<<"I am eating"<<endl;
    }
    void drink(){
        cout<<"I am drinking"<<endl;
    }
    void sleep(){
        cout<<"I am sleeping"<<endl;
    }
};

int main(){
    // Create two objects of the Human class
    Human h1,h2;
    
    // Set attributes for first human object (h1)
    h1.name="Ganesh";
    h1.occupation="Software Engineer";
    h1.age=20;
    
    // Display information for first human
    cout<<"Name: "<<h1.name<<endl;
    cout<<"Occupation: "<<h1.occupation<<endl;
    cout<<"Age: "<<h1.age<<endl;
    
    // Call methods for first human
    h1.eat();
    h1.drink();
    h1.sleep();
    
    // Set attributes for second human object (h2)
    h2.name="Rajesh";
    h2.occupation="Doctor";
    h2.age=25;
    
    // Display information for second human
    cout<<"Name: "<<h2.name<<endl;
    cout<<"Occupation: "<<h2.occupation<<endl;
    cout<<"Age: "<<h2.age<<endl;
    
    // Call methods for second human
    h2.eat();
    h2.drink();
    h2.sleep();
    
    return 0;
}