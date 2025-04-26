#include<iostream>
using namespace std;

// Function to find the first occurrence of element x in a sorted array
// using binary search approach
int firstOcc(int arr[],int low, int high, int x){
    // Base case: if search space is exhausted, element not found
    if(low > high){
        return -1;
    }
    
    // Calculate middle index
    int mid = (low+high)/2;
    
    // If x is greater than middle element, search in right half
    if(x > arr[mid]){
        return firstOcc(arr,mid+1,high,x);
    }
    // If x is smaller than middle element, search in left half
    else if(x < arr[mid]){
        return firstOcc(arr,low,mid-1,x);
    }
    // If x is found at mid
    else{
        // Check if this is the first occurrence by verifying:
        // 1. Either it's the first element (mid == 0)
        // 2. Or the previous element is different
        if(mid == 0 || arr[mid-1]!=arr[mid]){
            return mid;
        }
        // If not the first occurrence, search in left half
        else{
            return firstOcc(arr,low,mid-1,x);
        }
    }
}

int main(){
    // Sample sorted array with duplicate elements
    int arr[] = {5,10,10,15,20,20,20};
    int n = 7;  // Size of array
    int x = 20; // Element to find first occurrence of
    int low = 0;
    int high = n-1;
    
    // Print the index of first occurrence
    cout<<firstOcc(arr,low,high,x);
    return 0;
}