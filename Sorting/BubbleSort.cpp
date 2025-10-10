#include<iostream>
using namespace std;

void BubbleSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        bool isSwap = false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                isSwap = true;
            }
        }

        if(!isSwap){
            return;
        }
    }
}

int main(){
    int n = 5;
    int arr[n] = {64, 34, 25, 12, 22};
    BubbleSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}