#include<iostream>
using namespace std;

int secondlargest(int arr[],int n){
    int res = -1;
    int largest = 0;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[largest]){
            res = largest;
            largest = i;
        }
        else if(arr[i] != arr[largest]){
            if(res==-1 || arr[i]>arr[res]){
                res = i;
            }
        }
    }
    return arr[res];
};



int main(){
    int arr[] = {10,20,30,5,90,89};
    int n = 6;
    cout<<secondlargest(arr,n);
    return 0;
}