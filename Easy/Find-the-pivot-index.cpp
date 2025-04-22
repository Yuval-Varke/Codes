#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n = 4;
    vector<int> pl(n);
    vector<int> pr(n);
    pl[0] = 1;
    pr[n-1] = n;
    for(int i=1;i<n;i++){
        pl[i] = pl[i-1] + i+1;
    }
    for(int i=n-2;i>=0;i--){
        pr[i] = pr[i+1] + i+1;
    }
    for(int i=0;i<n;i++){
        if(pl[i] == pr[i]){
            cout<<i+1;
        }
    }
    return -1;
}