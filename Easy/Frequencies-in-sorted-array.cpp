#include<iostream>
using namespace std;

void Freq(int arr[],int n){
    int i=1;
    int freq = 1;
    while(i<n){
        while(i<n && arr[i] == arr[i-1]){
            i++;
            freq++;
        }
        cout<<arr[i-1]<<" "<<freq<<endl;
        i++;
        freq = 1;
    }
    if(n==1 || arr[n-1] != arr[n-2]){
        cout<<arr[n-1]<<" "<<1<<endl;
    }
}

int main(){
    int arr[] = {10,10,10,30,30,40,50};
    int n = 7;
    Freq(arr,n);
    return 0;
}