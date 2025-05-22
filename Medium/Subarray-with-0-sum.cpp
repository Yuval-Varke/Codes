#include<iostream>
#include<unordered_set>
using namespace std;

bool SumZero(int arr[],int n){
    unordered_set<int> s;
    int presum = 0;
    for(int i=0;i<n;i++){
        presum += arr[i];
        if(s.find(presum) != s.end()){
            return true;
        }
        if(presum == 0){
            return true;
        }
        s.insert(presum);
    }
    return false;
}


int main(){
    int arr[] = {-3,4,-3,-1,1};
    int n = 5;
    if(SumZero(arr,n)) cout<<"TRUE";
    else cout<<"FALSE";
    return 0;
}

