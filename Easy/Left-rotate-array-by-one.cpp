#include <iostream>
using namespace std;

//in this problem, we have to move the whole array each position by left; 
// where the first element will be the last one and the rest array would be the same


//store first element in "first" variable and then traverse i+1 and store in ith index; 
// then insert first element at last place hardcodedly
void leftRotateByOne(int arr[],int n){
    int first = arr[0];
    for(int i=0;i<n-1;i++){
        arr[i] = arr[i+1];
    }
    arr[n-1] = first;
}

int main(){
    int arr[] = {8,5,2,10,15,0};
    int n = 6;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    leftRotateByOne(arr,n);
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}