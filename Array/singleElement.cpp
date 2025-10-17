#include<iostream>
#include<vector>
using namespace std;

int solution(int nums[],int n){
    int st=0; int end=n-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if ((mid == 0 || (nums[mid] != nums[mid-1])) && 
        (mid == n-1 || (nums[mid] != nums[mid+1])))
        return nums[mid];
        if(mid%2 == 0){
            if(nums[mid-1]==nums[mid]){
                end=mid-1;
            }else{
                st=mid+1;
            }
        }else{
            if(nums[mid-1]==nums[mid]){
                st=mid+1;
            }else{
                end=mid-1;
            }
        }
           
    }
}


int main(){
    // // time complexity is O(n)
    // int arr[]={1,1,2,2,3,4,4,5,5,6,6};
    // int n=sizeof(arr)/sizeof(arr[0]);
    // int ans=0;
    // for(int i=0;i<n;i++){
    //     ans=ans^arr[i];
    // }
    // cout<<ans;

    // int nums[]={1,1,2,3,3,4,4,8,8};
    int nums[]={1,1,2,2,3,3,4};
    int n=sizeof(nums)/sizeof(nums[0]);
    cout<<solution(nums,n);
}