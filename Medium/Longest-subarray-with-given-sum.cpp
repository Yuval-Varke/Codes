#include<iostream>
#include<unordered_map>
using namespace std;

int MaxLen(int arr[],int sum,int n){
    unordered_map<int,int> mp;
    int presum = 0;
    int res = 0;
    for(int i=0;i<n;i++){
        presum += arr[i];
        if(presum == sum){
            res = i+1;
        }
        if(mp.find(presum) == mp.end()){
            mp.insert({presum,i});
        }
        if(mp.find(presum-sum) != mp.end()){
            res = max(res,i-mp[presum-sum]);
        }
    }
    return res;
}

int main(){
    int arr[]= {5,2,3};
    int sum = 5;
    int n = 3;
    cout<<MaxLen(arr,sum,n);
    return 0;
}