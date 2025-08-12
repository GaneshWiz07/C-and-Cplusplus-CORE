#include<iostream>
using namespace std;

int main(){
    int arr[5]={1,2,3,4,5};
    cout<<"Address of the array is "<<arr<<endl;
    cout<<"Address of the array is "<<&arr[0]<<endl;
    arr[0]=10;
    arr[1]=20;
    arr[2]=30;
    arr[3]=40;
    arr[4]=50;
    cout<<"The elements of the array are "<<arr[0]<<endl;
    cout<<"The elements of the array are "<<arr[1]<<endl;
    cout<<"The elements of the array are "<<arr[2]<<endl;
    cout<<"The elements of the array are "<<arr[3]<<endl;
    cout<<"The elements of the array are "<<arr[4]<<endl;
    
    //multidimensional array
    int arr2[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    cout<<"The elements of the array are "<<arr2[0][0]<<endl;
    cout<<"The elements of the array are "<<arr2[0][1]<<endl;
    cout<<"The elements of the array are "<<arr2[0][2]<<endl;
    cout<<"The elements of the array are "<<arr2[1][0]<<endl;
    cout<<"The elements of the array are "<<arr2[1][1]<<endl;
    cout<<"The elements of the array are "<<arr2[1][2]<<endl;
    //fill method
    string name[100];
    fill(name, name+100, "Ganesh");
    cout << "Array filled with: " << name[0] << endl;
    return 0;
}