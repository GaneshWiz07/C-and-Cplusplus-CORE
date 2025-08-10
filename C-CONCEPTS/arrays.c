#include<stdio.h>
#include<stdlib.h>

int one_dimensional_array(){
    int one_d[5]={1,2,3,4,5};
    printf("The first element of the array is %d\n", one_d[0]);
    printf("The second element of the array is %d\n", one_d[1]);
    printf("The third element of the array is %d\n", one_d[2]);
    printf("The fourth element of the array is %d\n", one_d[3]);
    printf("The fifth element of the array is %d\n", one_d[4]);
    return 0;
}   

int two_dimensional_array(){
    int two_d[2][3]={{1,2,3},{4,5,6}};
    printf("The first element of the array is %d\n", two_d[0][0]);
    printf("The second element of the array is %d\n", two_d[0][1]);
    printf("The third element of the array is %d\n", two_d[0][2]);
    printf("The fourth element of the array is %d\n", two_d[1][0]);
    printf("The fifth element of the array is %d\n", two_d[1][1]);
    printf("The sixth element of the array is %d\n", two_d[1][2]);
    return 0;
}   

int Array_input(){
    int int_arr[5];
    printf("Enter 5 integers: ");
    for(int i=0;i<5;i++){
        scanf("%d", &int_arr[i]);
    }
    for(int i=0;i<5;i++){
        printf("%d ", int_arr[i]);
    }
    return 0;
}
int Array_methods(){
    //string array
    char string_arr[5][16] = {"Hello", "World", "C", "Programming", "Language"};
    //integer array
    int int_arr[5]={1,2,3,4,5};
    //float array
    float float_arr[5]={1.1,2.2,3.3,4.4,5.5};
    //double array
    double double_arr[5]={1.1,2.2,3.3,4.4,5.5};
    //print the length of the array (number of elements)
    printf("Length of the array is %zu elements\n", sizeof(string_arr) / sizeof(string_arr[0]));
    //print the size of the array in bytes
    printf("Size of the array is %zu bytes\n", sizeof(string_arr));
  
    return 0;
}

int main(){
    one_dimensional_array();
    two_dimensional_array();
    Array_methods();
    Array_input();
    return 0;
}
