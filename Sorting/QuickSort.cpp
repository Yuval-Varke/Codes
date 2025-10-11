#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int> &arr,int st,int end){  //Avg - O(n log n)
    int idx = st - 1;                            //Worst - O(n^2) : when the pivot is repeatedly smallest
    int pivot = arr[end];                        //or largest element of the array
    for(int j=st;j<end;j++){
        if(arr[j] <= pivot){
            idx++;
            swap(arr[j],arr[idx]);
        }
    }

    idx++;
    swap(arr[end], arr[idx]);
    return idx;
}


void QuickSort(vector<int> &arr,int st,int end){  
    if(st < end){
        int pivIdx = partition(arr,st,end);
        QuickSort(arr,st,pivIdx-1);
        QuickSort(arr,pivIdx+1,end);
    }
}

int main(){
    int n = 5;
    vector<int> arr = {4,1,5,2,3}; 
    QuickSort(arr,0,arr.size()-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}