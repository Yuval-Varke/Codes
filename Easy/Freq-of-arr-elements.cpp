#include<iostream>
#include<unordered_map>
using namespace std;

//here, we have to count the frequencies(no. of occurences of each element) of the array.

//used hashap to store key value pairs of array elements and their occurences.
void countFreq(int arr[],int n){
    unordered_map<int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    for(auto e : mpp){
        cout<<e.first<<" "<<e.second<<endl;
    }
}

int main(){
    int arr[] = {50,50,10,40,10};
    int n = 5;
    countFreq(arr,n);
    return 0;
}
