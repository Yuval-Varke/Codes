#include <iostream>
#include <vector>
using namespace std;

int largest(vector<int> ans){
    int maxi = 0;
    for(int i=0;i<ans.size();i++){
        if(ans[i]>maxi){
            maxi = ans[i];
        }
    }
    return maxi;
}


int main() {
   vector<int> ans = {10,40,20,5,90,100};
   cout<<largest(ans)<<endl;
   return 0;
}