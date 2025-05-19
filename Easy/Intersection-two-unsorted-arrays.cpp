#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;


void IntersectArrays(int arr1[],int arr2[],int n1,int n2){
    unordered_set<int> s(arr2,arr2+n2);
    for(int i=0;i<n1;i++){
        if(s.find(arr1[i]) != s.end()){      //this here checks whther the arr1 has the element or not. s.end() points to the iterator which is after the last elememt.
            cout<<arr1[i]<<" ";
        }
    }
}

int main(){
    int arr1[] = {4,9,5};
    int arr2[] = {9,4,9,8,4};
    int n1 = 3;
    int n2 = 5;
    IntersectArrays(arr1,arr2,n1,n2);
    return 0;
}