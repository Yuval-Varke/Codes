#include <iostream>
#include <vector>
using namespace std;

void leaders(int arr[], int n, vector<int>& ans) {
    int leader = arr[n-1];
    ans.push_back(leader);
    for(int i=n-2;i>=0;i--){
        if(leader < arr[i]){
            leader = arr[i];
            ans.push_back(leader);
        }
    }
}

int main() {
    int arr[] = {7, 10, 4, 3, 6, 5, 2};
    int n = 7;
    vector<int> ans;
    leaders(arr, n, ans);
    for (int i = ans.size()-1; i >=0; i--) {
        cout << ans[i] << " ";
    }
    return 0;
}