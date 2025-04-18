#include<iostream>
using namespace std;

int checkWater(int arr[],int n){
    int res = 0;
    int lmax[n];
    int rmax[n];
    //precompute leftmax
    lmax[0] = arr[0];
    for(int i=1;i<n;i++){
        lmax[i] = max(arr[i],lmax[i-1]);
    }
    //precompute rightmax
    rmax[n-1] = arr[n-1];
    for(int i=n-2;i>=0;i--){
        rmax[i] = max(arr[i],rmax[i+1]);
    }
    //used formula 
    for(int i=1;i<n-1;i++){
        res = res + (min(lmax[i],rmax[i])-arr[i]);
    }
    return res;
}

int main(){
    int arr[] = {5,0,6,2,3};
    int n = 5;
    cout<<checkWater(arr,n);
    return 0;
}