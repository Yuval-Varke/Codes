#include<iostream>
using namespace std;

bool isPair(int arr[],int n,int x){
    int i = 0;
    int j = n-1;
    while(i<j){
        if(arr[i] + arr[j] == x){
            return true;
        }
        else if(arr[i] + arr[j] > x){
            j--;
        }
        else{
            i++;
        }
    }
    return false;
}


int main(){
    int arr[] = {2,5,8,12,30};
    int n = 5;
    int x = 27;
    if(isPair(arr,n,x)) cout<<"TRUE";
    else cout<<"FALSE";
}