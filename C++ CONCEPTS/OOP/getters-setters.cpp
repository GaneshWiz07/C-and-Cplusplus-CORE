// Program demonstrating the use of getters and setters in C++
#include<iostream>
using namespace std;

// Define a class to represent Temperature
class Temperature{
    private:
    // Private data member - can only be accessed through public methods
    int temperature;
    
    public:
    // Setter method to set the temperature value
    void setTemperature(int t){
        this->temperature=t;
    }
    
    // Getter method to retrieve the temperature value
    int getTemperature(){
        return temperature;
    }
};

int main(){
    // Create a Temperature object
    Temperature t;
    
    // Set temperature using setter method
    t.setTemperature(30);
    
    // Get and display temperature using getter method
    cout<<"Temperature: "<<t.getTemperature()<<endl;
    
    return 0;
}