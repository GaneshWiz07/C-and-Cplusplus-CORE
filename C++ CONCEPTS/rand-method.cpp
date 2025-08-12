// Program demonstrating random number generation in C++
#include<iostream>
#include<stdlib.h>  // For rand() and srand() functions
#include<time.h>    // For time() function
using namespace std;

int main(){
    // Seed the random number generator with current time
    // This ensures different random numbers each time the program runs
    srand(time(0));
    
    // Generate a random number between 0 and 99 using modulus operator
    int random_number=(rand()%100)+1;
    
    // Display the generated random number
    cout<<"The random number is "<<random_number<<endl;
    
    return 0;
}