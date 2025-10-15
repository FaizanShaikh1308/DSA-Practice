#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>nums={1,2,3,4};
    int n=nums.size();
    vector<int>ans(n,1);
    vector<int>prefix;
    vector<int>suffix;

    prefix.push_back(1);
    for(int i=1;i<n;i++){ 
        prefix.push_back(prefix[i-1]*nums[i-1]);
    }

    suffix.resize(n);
    suffix[n-1]=1;
    for(int i=n-2;i>=0;i--){
        suffix[i]=(suffix[i+1]*nums[i+1]);
    }
    for(int i=0;i<n;i++){
        ans[i]=suffix[i]*prefix[i];
    }
    for(int val:ans){
        cout<<val<<" ";
    }
}