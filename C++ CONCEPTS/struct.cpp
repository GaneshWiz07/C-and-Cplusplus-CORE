// Program demonstrating the use of structures in C++
#include<iostream>
using namespace std;

// Define a structure to represent a student
struct student{
    string name;     // Student's name
    int age;         // Student's age
    int roll_no;     // Student's roll number
};

int main(){
    // Create an instance of the student structure
    student s1;
    
    // Assign values to the structure members
    s1.name="Ganesh";
    s1.age=20;
    s1.roll_no=123; 
    
    // Display the student information
    cout<<"The name of the student is "<<s1.name<<endl;
    cout<<"The age of the student is "<<s1.age<<endl;
    cout<<"The roll number of the student is "<<s1.roll_no<<endl;
    
    return 0;
}