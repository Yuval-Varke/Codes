#include<iostream>
using namespace std;

bool findSum(int arr[],int n,int sum){
    int s = 0;
    int curr = 0;
    for(int e=0;e<n;e++){
        curr += arr[e];
        while(sum<curr){
            curr -= arr[s];
            s++;
        }
        if(curr == sum) return true;
    }
    return false;
}


int main(){
    int arr[] = {1,4,20,3,10,5};
    int n = 6;
    int sum = 33;
    if(findSum(arr,n,sum)) cout<<"true";
    else cout<<"false";
}