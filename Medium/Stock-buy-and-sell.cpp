#include<iostream>
using namespace std;


//used same logic as used in "frequencies in sorted array" problem.
int StockBuySell(int arr[],int n){
    int i = 1;
    int result = 0;
    int diff = 0;
    while(i<n){
        while(i<n && arr[i]>arr[i-1]){
            diff = (arr[i] - arr[i-1]);
            result = result + diff;
            i++;
        }
        i++;
        diff = 0;
    }
    return result;
}

int main(){
    int arr[] = {1,5,3,1,2,8};
    int n = 6;
    cout<<StockBuySell(arr,n);
    return 0;
}