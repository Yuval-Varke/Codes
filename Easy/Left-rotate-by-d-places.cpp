#include <iostream>
using namespace std;


//normal reverse function
void rev(int arr[],int low,int high){
    while(low<high){
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}

void leftRotateByD(int arr[], int n, int d)
{
    rev(arr,0,d-1); //reverses start to dth elemnt
    rev(arr,d,n-1); //reverses dth to last elemnt
    rev(arr,0,n-1); //reverses whole arr
}

int main()
{
    int arr[] = {1,2,3,4,5};
    int n = 5;
    int d = 2;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    leftRotateByD(arr, n, d);
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}