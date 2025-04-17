#include <iostream>
using namespace std;


//maintain the index-ind which shows the first zero appearance which then swaps with non zero elements
void moveZeros(int arr[],int n){
    int ind = 0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            swap(arr[ind],arr[i]);
            ind++;
        }
    }
}

int main(){
    int arr[] = {8,5,0,10,0,20,0};
    int n = 7;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    moveZeros(arr,n);
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}