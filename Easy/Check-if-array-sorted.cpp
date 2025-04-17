#include<iostream>
using namespace std;

bool checkSorted(int arr[],int n){
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            return false;
        }
    }
    return true;
}

int main(){
    int arr[] = {10,30,50,70,90};
    int n = 5;
    if(checkSorted(arr,n)){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    return 0;
}