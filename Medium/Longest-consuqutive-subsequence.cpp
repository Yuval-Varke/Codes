#include<iostream>
#include<unordered_set>
using namespace std;

int LongestConsecutive(int arr[],int n){
    unordered_set<int> s(arr,arr+n);
    int res = 1;
    for(auto x: s){
        if(s.find(x-1) == s.end()){
            int curr = 1;
            while(s.find(x+curr) != s.end()){
                curr++;
            }
            res = max(res,curr);
        }
    }
    return res;
}


int main(){
    int arr[] = {100,4,200,3,1,2};
    int n = 6;
    cout<<LongestConsecutive(arr,n);
    return 0;
}