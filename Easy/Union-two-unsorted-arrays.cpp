#include<iostream>
#include<unordered_set>
using namespace std;

int UnionArrays(int arr1[],int arr2[],int m,int n){
    unordered_set<int> s;
    for(int i=0;i<m;i++){
        s.insert(arr1[i]);
    }
    for(int i=0;i<n;i++){
        s.insert(arr2[i]);
    }
    return s.size();
}

int main(){
    int arr1[] = {15,20,5,15};
    int arr2[] = {15,15,15,20,10};
    int m = 4;
    int n = 5;
    cout<<UnionArrays(arr1,arr2,m,n);
    return 0;
}