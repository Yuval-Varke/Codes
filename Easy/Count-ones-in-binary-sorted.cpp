#include<iostream>
using namespace std;

//given that there is a sorted binary array in the form of - 0,0,1,1,1

int countOnes(int arr[],int n){
    int low = 0;
    int high = n-1;

    //normal BS loop
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]== 0){
            low = mid + 1;
        }
        else{

            //if its the first element, or its the last zero occurence, 
            //then all other elements present in array are ones.
            if(mid == 0 || arr[mid-1] == 0){
                return (n-mid);
            }

            //otherwise, search the other part of array
            else{
                high = mid - 1;
            }
        }
    }
    return 0;
}


int main(){
    int arr[] = {0,0,0,1,1,1,1};
    int n = 7;
    cout<<countOnes(arr,n);
    return 0;

}