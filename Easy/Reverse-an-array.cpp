#include<iostream>
#include<stack>
using namespace std;

// void reverseArray(int arr[],int n){
//     stack<int> s;
//     for(int i=0;i<n;i++){
//         s.push(arr[i]);
//     }
//     while(!s.empty()){
//         cout<<s.top()<<" ";
//         s.pop();
//     }
// }


void reverseArray(int arr[],int n){
    int low = 0;
    int high = n-1;
    while(low<high){
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++;
        high--;
    }
}


int main(){
    int arr[] = {10,30,50,70,90};
    int n = 5;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    reverseArray(arr,n);
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;   
}