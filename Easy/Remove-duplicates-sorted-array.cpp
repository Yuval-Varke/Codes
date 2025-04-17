#include<iostream>
using namespace std;

//dont have to remove duplicates completely, 
//just have to place non-duplicates at the starting of the array.
void removeDuplicates(int arr[],int n){
    int res = 1;
    for(int i=1;i<n;i++){
        if(arr[i] != arr[res-1]){
            arr[res] = arr[i];
            res++;
        }
    }
}

int main(){
    int arr[] = {10,20,20,30,30,30};
    int n = 6;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    removeDuplicates(arr,n);
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}