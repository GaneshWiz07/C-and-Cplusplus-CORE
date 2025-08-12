// Program demonstrating constructor overloading in C++
#include<iostream>
using namespace std;

// Define a class to represent a Vehicle
class Vehicle{
    public:
    // Data members (attributes)
    string name;     // Vehicle's name
    int wheels;      // Number of wheels
    int seats;       // Number of seats

    // Parameterized constructor with all three parameters
    Vehicle(string name, int wheels, int seats){
        this->name=name;
        this->wheels=wheels;
        this->seats=seats;
    }   
    
    // Overloaded constructor with only name and wheels parameters
    // Seats will remain uninitialized (garbage value)
    Vehicle(string name, int wheels){
        this->name=name;
        this->wheels=wheels;
    }
};

int main(){
    // Create two Vehicle objects using different constructors
    Vehicle v1("Car", 4, 5),v2("Bike", 2);
    
    // Display information for first vehicle (created with 3-parameter constructor)
    cout<<"Vehicle 1"<<endl;
    cout<<"Name: "<<v1.name<<endl;
    cout<<"Wheels: "<<v1.wheels<<endl;
    cout<<"Seats: "<<v1.seats<<endl;
    
    // Display information for second vehicle (created with 2-parameter constructor)
    cout<<"Vehicle 2"<<endl;
    cout<<"Name: "<<v2.name<<endl;
    cout<<"Wheels: "<<v2.wheels<<endl;
    cout<<"Seats: "<<v2.seats<<endl;  // This will show garbage value
    
    return 0;
}