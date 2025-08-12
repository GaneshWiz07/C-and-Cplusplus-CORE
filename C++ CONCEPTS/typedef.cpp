// Program demonstrating the use of typedef to create custom type aliases
#include<iostream>
#include<vector>
using namespace std;

// Define a custom type alias for a vector of string-int pairs
typedef vector<pair<string,int>>pairlist;
typedef string name;
int main(){
    // Create a pairlist (vector of string-int pairs)
    pairlist pl;
    
    // Add fruit names with their quantities to the list
    pl.push_back(make_pair("apple",10));
    pl.push_back(make_pair("banana",20));
    pl.push_back(make_pair("cherry",30));
    
    // Iterate through the list and display each fruit with its quantity
    for(auto &p:pl){
        cout<<p.first<<" "<<p.second<<endl;
    }
    
    name myname="Ganesh";
    cout<<"My Name is "<<myname<<endl;
    return 0;
}