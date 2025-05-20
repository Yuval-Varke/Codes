#include<iostream>
#include<unordered_set>
using namespace std;

bool Twosum(int arr[], int sum,int n){
    unordered_set<int> s;
    for(int i=0;i<n;i++){
        if(s.find(sum-arr[i]) != s.end()){
            return true;
        }
        else{
            s.insert(arr[i]);
        }
    }
    return false;
}

int main(){
    int arr[]= {8,3,4,5,2};
    int sum = 50;
    int n = 5;
    if(Twosum(arr,sum,n)) cout<<"TRUE";
    else cout<<"FALSE";
    return 0;
}