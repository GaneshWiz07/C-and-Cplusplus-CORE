#include<iostream>
using namespace std;


int main(){
    //for loop
    for(int i=0;i<10;i++){
        cout<<"i is "<<i<<endl;
    }
    //while loop
    int i=0;
    while(i<10){
        cout<<"i is "<<i<<endl;
        i++;
    }
    //do-while loop     
    int j=0;
    do{
        cout<<"j is "<<j<<endl;
        j++;
    }while(j<10);
    //break statement
    for(int k=0;k<10;k++){
        if(k==5){
            break;
        }
        cout<<"k is "<<k<<endl;
    }
    //continue statement
    for(int l=0;l<10;l++){
        if(l==5){
            continue;
        }
        cout<<"l is "<<l<<endl;
    }
    //nested loop
    for(int m=0;m<10;m++){
        for(int n=0;n<10;n++){
            cout<<"m is "<<m<<" and n is "<<n<<endl;
        }
    }
    //goto statement
    int o=0;
    goto label;
    label:
    cout<<"o is "<<o<<endl;
    o++;
    if(o<10){
        goto label;
    }
    //for each loop
    int arr[5]={1,2,3,4,5};
    for(int p:arr){
        cout<<"p is "<<p<<endl;
    }
    
    return 0;

}
