#include<iostream>
#include<algorithm>
#include<vector>
#include<climits>
using namespace std;

//By Brute Force Approach
// vector<int>maxElement(vector<int>&nums){
//     vector<int>ans;
//     int n=nums.size();
//     int count=1;
//     for(int i=0;i<n;i++){
//         for(int j=1;j<n;j++){
//             if(i !=j && nums[i]==nums[j]){
//                 count++;
//             }
//             if(count>n/2){
//                 ans.push_back(count);
//                 ans.push_back(i);
//                 return ans;
//             }
//         }
//         count=1;
//     }
//     return {};
// }

// optimize approach
// int maxElement(vector<int>&nums){
//     sort(nums.begin(),nums.end());
//     int freq=1;
//     int n=nums.size();
//     for(int i=1;i<n;i++){
//         if(nums[i]==nums[i-1]){
//             freq++;
//             if(freq>n/2){
//                 return nums[i];
//             }
//         }else freq=1;
//     }
//     return -1;

// }
//Moore Voting algorithm
int maxElement(vector<int>&nums){
    int freq=0;
    int ans=0;
    int n=nums.size();
    for(int i=0;i<n;i++){
        if(freq==0) ans=nums[i];
        if(ans==nums[i]) freq++;
        else freq--;
    }
    return ans;
}

int main(){
    vector<int>vec={2,1,2,1,1,2,1};
    int result=maxElement(vec);
    cout<<result;
}