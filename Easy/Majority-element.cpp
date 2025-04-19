#include<iostream>
using namespace std;

//Naive:-
// int majorityElement(int arr[],int n){
//     for(int i=0;i<n;i++){
//         int cnt = 1;
//         for(int j=i+1;j<n;j++){
//             if(arr[i] == arr[j]){
//                 cnt++;
//             }
//         }
//         if(cnt > (n/2)){
//             return i;
//         }
//     }
//     return -1;
// }

//Moore-voting algorithm:-
//Efficient:-
int majorityElement(int arr[],int n){

    //phase1 - finds a candidate; through cutting elements with each other.
    int res = 0;
    int cnt = 1;
    for(int i=1;i<n;i++){
        if(arr[res] == arr[i]){
            cnt++;
        }
        else{
            cnt--;
        }
        if(cnt == 0){
            res = i;
            cnt = 1;
        }
    }

    //phase2 - checks whether tht candidate is actually a majority or not.
    cnt = 0;
    for(int i=0;i<n;i++){
        if(arr[res] == arr[i]){
            cnt++;
        }
    }
    if(cnt <= n/2){
        res = -1;
    }
    return res;
}

int main(){
    int arr[] = {8,7,6,8,6,6,6,6};
    int n = 8;
    cout<<majorityElement(arr,n);
    return 0;
}