#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> CountDistinct(vector<int> arr,int k){
    int n = arr.size();
    vector<int> res;
    unordered_map<int,int> mp;
    for(int i=0;i<k;i++){
        mp[arr[i]] += 1;
    }
    res.push_back(mp.size());
    for(int i=k;i<n;i++){
        mp[arr[i]] += 1;
        mp[arr[i-k]] -= 1;
        
        if(mp[arr[i-k]] == 0){
            mp.erase(arr[i-k]);
        }

        res.push_back(mp.size());
    }
    return res;
}


int main(){
    vector<int> arr = {10,20,10,40,30,40};
    int k = 4;
    vector<int> res = CountDistinct(arr,k);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    return 0;
}