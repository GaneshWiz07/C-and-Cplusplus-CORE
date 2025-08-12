// Program demonstrating inheritance in C++
#include<iostream>
using namespace std;

// Base class Animal
class Animal{
    public:
    bool isAlive=true;
    
    void eat(){
        cout<<"I am eating"<<endl;
    }
};

// Dog class inherits from Animal
class Dog:public Animal{
    public:
    void bark(){
        cout<<"I am barking"<<endl;
    }
};

// Cat class inherits from Animal and Dog(Multiple inheritance)
class Cat:public Animal,public Dog{
    public:
    void meow(){
        cout<<"I am meowing"<<endl;
    }
};

int main(){
    Dog d;
    Cat c;
    cout<<"Dog Actions"<<endl;
    // Dog can eat (inherited from Animal) and bark (its own method)
    d.eat();
    d.bark();
    cout<<"Cat Actions"<<endl;
    // Cat can eat,bark and meow(Multiple inheritance)
    c.meow();
    c.bark();
    c.Dog::eat();
    return 0;
}