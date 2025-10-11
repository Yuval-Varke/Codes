#include<iostream>
using namespace std;

class Student{
public:
    string name;
    Student(){
        cout<<"Non-parameterized\n";
    }
    
    Student(string name){
        this->name = name;
        cout<<"Paramterized\n";
    }
};

int main(){
    //cosntructor overloading - objects takes on different forms 
    //depending on the context (parameterized/non-parameterized)
    Student s1("yuval");
    Student s2;
    return 0;
}



// Polymorphism --> 1. Compile time poly. --> 1.Constructor Overloading  (constuctors in same class - same name, diff parametrs)
//                                            2.Function Overloading   (functions in same class - same name, diff parameters)
//                                            3.Operator Overloading  (gives an operator, new meaning when used with objects)
//                  2. Run time poly.  --> 1.Function Overriding (Parent and child class both contain the same function with different implementation)
//                                         2.Virtual Functions (a function declared in a base class using the virtual keyword, which can be overridden in a derived class)