#include<iostream>
using namespace std;

//By-default the access modifier of a class is private
//Private members are used for security reasons

//getter functions are used to make user not change the particular class member, but can access/print it


class Student{
public:
    int rno;
    string name;

    Student(int rno,string name,float marks){
        this->rno = rno;
        this->name = name; 
        this->marks = marks;
    }
    float getMarks(){ //getter function to access private data member which is marks
        return marks;
    }
    void setMarks(float m){ //setter function to make changes to the private data member
        marks = m;
    }
private:
    float marks;
};




int main(){
    Student s1(21,"Yuval",98.7);
    cout<<s1.getMarks();
    s1.setMarks(99.9);
    cout<<s1.getMarks();

}