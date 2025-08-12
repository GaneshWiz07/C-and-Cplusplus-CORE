// Program demonstrating the use of constructors in C++
#include<iostream>
using namespace std;

// Define a class to represent a Student
class Student{
    public:
    // Data members (attributes)
    string name;     // Student's name
    int age;         // Student's age
    int roll_no;     // Student's roll number

    // Parameterized constructor to initialize student objects
    Student(string name, int age, int roll_no){
        // Use 'this' pointer to distinguish between parameter and member variables
        this->name=name;
        this->age=age;
        this->roll_no=roll_no;
        
        // Display constructor call information
        cout<<"Constructor called"<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Roll No: "<<roll_no<<endl;
    }
};

int main(){
    // Create three Student objects using the parameterized constructor
    Student s1("Ganesh", 20, 123),s2("Rajesh", 21, 124),s3("Suresh", 22, 125);
    return 0;
}