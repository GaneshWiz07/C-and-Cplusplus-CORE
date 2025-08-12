// Program demonstrating the use of enums in C++
#include<iostream>
using namespace std;

// Define an enumeration for days of the week
enum week{
    Monday,     // 0
    Tuesday,    // 1
    Wednesday,  // 2
    Thursday,   // 3
    Friday,     // 4
    Saturday,   // 5
    Sunday      // 6
};

int main(){
    // Declare a variable of enum type week
    week today;
    
    // Assign Monday to the today variable
    today=Monday;
    
    // Display the numeric value of the enum (Monday = 0)
    cout<<"Today is "<<today<<endl;
    
    return 0;
}