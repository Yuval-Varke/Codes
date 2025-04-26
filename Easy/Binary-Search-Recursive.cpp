#include<iostream>
using namespace std;

int BS(int arr[],int low,int high,int x){
    if(low>high){
        return -1;
    }
    int mid = (low+high)/2;
    if(arr[mid] == x) return mid;
    else if(arr[mid] > x){
        return BS(arr,low,mid-1,x);
    }
    else{
        return BS(arr,mid+1,high,x);
    }
}

int main(){
    int arr[] = {10,20,30,40,50,60};
    int x = 20;
    int low = 0;
    int high = 5;
    cout<<BS(arr,low,high,x);
    return 0;
}