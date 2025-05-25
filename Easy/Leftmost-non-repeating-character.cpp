#include<iostream>
#include<unordered_map>
using namespace std;

int LeftNonRepeat(string s){
    unordered_map<char,int> mp;
    for(int i=0;i<s.length();i++){
        mp[s[i]]++;
    }
    for(int i=0;i<s.length();i++){
        if(mp[s[i]] < 2){
            return i;
        }
    }
    return -1;
}


int main(){
    string s = "abcbadcd";
    cout<<LeftNonRepeat(s);
    return 0;
}