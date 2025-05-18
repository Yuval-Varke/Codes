#include<iostream>
#include<unordered_set>
using namespace std;

int Count(int arr[],int n){
    unordered_set<int> s;
    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }
    return s.size();
}



int main(){
    int arr[] = {10,20,10,5,30};
    int n = 5;
    cout<<Count(arr,n);
    return 0;
}