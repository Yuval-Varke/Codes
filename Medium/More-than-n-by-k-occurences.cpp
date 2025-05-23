#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

void Occur(int arr[],int k, int n){
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    for(auto e:mp){
        if(e.second >= (n/k)){
            cout<<e.first<<" ";
        }
    }
}


int main(){
    int arr[] = {30,10,20,20,10,20,30,30};
    int k = 4;
    int n = 8;
    Occur(arr,k,n);
    return 0;
}