#include<iostream>
#include<unordered_set>
using namespace std;

bool SumGiven(int arr[],int sum,int n){
    unordered_set<int> s;
    int presum = 0;
    for(int i=0;i<n;i++){
        presum += arr[i];
        if(presum == sum){
            return true;
        }
        if(s.find(presum-sum) != s.end()){
            return true;
        }        
        s.insert(presum);
    }
    return false;
}

int main(){
    int arr[]= {5,8,6,13,3,-1};
    int sum = 22;
    int n = 6;
    if(SumGiven(arr,sum,n)) cout<<"TRUE";
    else cout<<"FALSE";
    return 0;
}