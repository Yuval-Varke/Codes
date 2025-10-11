#include <iostream>
using namespace std;

//class Student - is a blueprint for creating objects
class Student{
public:
    string name;
    int age;
    float gpa;

    // A Default constructor is created automatically when an object is created, if not created explicitly.
    //constructor - acts as a function which can be called to use multiple times

    //Multiple constructors can be created with different parameters...
    Student(string s,int a,float g){ //parameterized constructor
        name = s;
        age = a;
        gpa = g;
    }

    Student(string s,int a){
        name = s;
        age = a;
    }
};

//value is used to pass the object by value so that the changes are not reflected in the original object
void print(Student S){
    cout<<S.name<<" "<<S.age<<" "<<S.gpa<<endl;
}

//reference is used to pass the object by reference so that the changes are reflected in the original object
void change(Student& S){
    S.name = "Yuvraj";
}
















int main(){
    //object S - is an instance of a class
    Student S1("Yuval",21,7.25);

    
    Student S2("Moana",19);
    // Student S2;
    // S2.name = "Shubham";   //this is not a good way to initialize the values of the object  
    // S2.age = 22;           //it will be overwritten by the constructor
    // S2.gpa = 8.25;         

    Student S3 = S1; // Deep Copy 
    S3.name = "Vishu";

    Student S4(S1); //Copy Constructor

    

    // cout<<S1.name<<" "<<S1.age<<" "<<S1.gpa<<endl;
    // cout<<S2.name<<" "<<S2.age<<" "<<S2.gpa<<endl;
    print(S1);
    // change(S1);
    print(S2);
    print(S3);
    print(S4);

}