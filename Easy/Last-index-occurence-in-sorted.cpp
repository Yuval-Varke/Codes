#include<iostream>
using namespace std;

// Function to find the last occurrence of x in a sorted array
int lastOcc(int arr[],int low,int high,int x, int n){
    // If search range is invalid, element not found
    if(low > high) return -1;
    
    // Calculate middle index
    int mid = (low+high)/2;
    
    // If middle element is greater than x, search left half
    if(arr[mid] > x){
        return lastOcc(arr,low,mid-1,x,n);
    }
    // If middle element is less than x, search right half
    else if(arr[mid] < x){
        return lastOcc(arr,mid+1,high,x,n);
    }
    // If middle element equals x
    else{
        // Check if this is the last occurrence
        if(mid == n-1 || arr[mid]!=arr[mid+1]){
            return mid;
        }
        // If not last occurrence, search right half
        else{
            return lastOcc(arr,mid+1,high,x,n);
        }
    }
}

int main(){
    // Sample sorted array
    int arr[] = {5,10,10,10,20,20,20};
    int n = 7;  // Size of array
    int x = 10; // Element to find
    int low = 0;  // Starting index
    int high = n-1;  // Ending index
    
    // Print the index of last occurrence
    cout<<lastOcc(arr,low,high,x,n);
    return 0;
}
