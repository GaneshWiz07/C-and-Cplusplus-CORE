#include<stdio.h>
#include<stdlib.h>

typedef struct{
    char name[20];
    int age;
    float gpa;
}Student;

typedef struct{
    char brand[20];
    char model[20];
    int year;
}Car;


int main(){
    Student s1={"John",20,3.5};
    printf("The name of the student-1 is %s\n", s1.name);
    printf("The age of the student-1 is %d\n", s1.age);
    printf("The gpa of the student-1 is %f\n", s1.gpa);
    Student s2={"Jane",21,3.6};
    printf("The name of the student-2 is %s\n", s2.name);
    printf("The age of the student-2 is %d\n", s2.age);
    printf("The gpa of the student-2 is %f\n", s2.gpa);

    printf("--------------Array of Structs-------------\n");
    Car cars[3]={{"Toyota","Corolla",2020},{"Ford","Mustang",2021},{"Chevrolet","Camaro",2022}};
    for(int i=0;i<3;i++){
        printf("The brand of the car-%d is %s\n", i+1, cars[i].brand);
        printf("The model of the car-%d is %s\n", i+1, cars[i].model);
        printf("The year of the car-%d is %d\n", i+1, cars[i].year);
    }
    return 0;
}