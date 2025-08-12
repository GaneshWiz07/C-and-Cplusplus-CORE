// Program demonstrating access modifiers in C++
#include<iostream>
using namespace std;

// Define a class to demonstrate different access modifiers
class Student{
    private:
    // Private member - can only be accessed within the class
    int age;
    
    public:
    // Public setter method to set the private age variable
    void setAge(int a){
        age=a;
    }
    
    // Public getter method to retrieve the private age variable
    int getAge(){
        return age;
    }
    
    protected:
    // Protected member - can be accessed by derived classes but not from outside
    int marks;
    
    public:
    // Public setter method to set the protected marks variable
    void setMarks(int m){
        marks=m;
    }
    
    // Public getter method to retrieve the protected marks variable
    int getMarks(){
        return marks;
    }
};

int main(){
    // Create a Student object
    Student s;
    
    // Set age using public setter method (cannot access private member directly)
    s.setAge(20);
    
    // Set marks using public setter method
    s.setMarks(90);
    
    // Display age using public getter method
    cout<<"Age: "<<s.getAge()<<endl;
    
    // Display marks using public getter method
    cout<<"Marks: "<<s.getMarks()<<endl;
    
    return 0;
}