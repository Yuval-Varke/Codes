#include <iostream>
using namespace std;

// while passing objects:- 
//By default - pass by value
// & - pass by ref


class Cricketer{
public:
    string name;
    int runs;
    Cricketer(string name,int runs){
        this->name = name; //this keyword is used to use the same variable names
        this->runs = runs; //this->runs means the runs from the class not from the constructor
    }

    void print(int runs){
        cout<<name<<" "<<this->runs<<endl;
        cout<<runs<<endl;
    }
};



int main(){
    Cricketer c1("Virat Kohli",100);
    Cricketer c2("Rohit Sharma",150);
    Cricketer* c4 = new Cricketer("Jinkx",80);
    // cout<<c1.name<<" "<<c1.runs<<endl;
    // cout<<c2.name<<" "<<c2.runs<<endl;

    cout<<c4->name<<" "<<c4->runs<<endl; // DMA - Dynamic memory allocation - uses new keyword to allocate heap memory to the variable/object.
    // even this pointer object is passed to any func, it will be always pass by ref.
    
    Cricketer* c3 = &c1;
    cout<<(*c3).runs<<endl;
}