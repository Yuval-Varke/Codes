#include<iostream>
using namespace std;

int countOnes(int arr[],int n){
    int i = 0;
    int cnt = 0;
    int maxcnt = 0;
    while(i<n){
        while(i<n && arr[i]==1){
            i++;
            cnt++;
        }
        i++;
        maxcnt = max(maxcnt,cnt);
        cnt = 0;
    }
    return maxcnt;
}


int main(){
    int arr[] = {1,0,1,1,1,1,0,1,1};
    int n = 6;
    cout<<countOnes(arr,n);
    return 0;
}