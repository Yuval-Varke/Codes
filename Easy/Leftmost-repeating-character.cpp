#include<iostream>
#include<unordered_map>
using namespace std;

int LeftRepeat(string s){
    unordered_map<char,int> mp;
    for(int i=0;i<s.length();i++){
        mp[s[i]]++;
    }
    for(int i=0;i<s.length();i++){
        if(mp.find(s[i]) != mp.end()){
            if(mp[s[i]] > 1){
                return i;
            }
        }
    }
    return -1;
}


int main(){
    string s = "abcbad";
    cout<<LeftRepeat(s);
    return 0;
}