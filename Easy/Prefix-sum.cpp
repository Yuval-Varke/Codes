#include<iostream>
using namespace std;

int main(){
    int arr[] = {2,8,3,9,6,5,4};
    int n = 7;
    int l = 1;
    int r = 3;
    int ps[n];
    ps[0] = arr[0];
    for(int i=1;i<n;i++){
        ps[i] = ps[i-1] + arr[i];
    }
    if(l==0){
        cout<< ps[r];
    }
    else{
        cout<<ps[r]-ps[l-1];
    }
}