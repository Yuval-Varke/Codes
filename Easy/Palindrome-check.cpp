#include<iostream>
#include<string>
using namespace std;

bool isPal(string str){
    int i = 0;
    int j = str.length()-1;
    while(i<=j){
        if(str[i] != str[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}


int main(){
    string str = "ABCDCA";
    if(isPal(str)) cout<<"TRUE";
    else cout<<"FALSE";
}