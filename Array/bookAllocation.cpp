#include<iostream>
#include<vector>

using namespace std;

bool isValid(vector<int>arr,int n,int m,int maxAllocation){
    int student=1;
    int pages=0;
    
    for(int i=0;i<n;i++){
        if(arr[i]>maxAllocation) return false;
        if(pages+arr[i]<=maxAllocation){
            pages=pages+arr[i];
        }else{
            student++;
            pages=arr[i];
        }
    }
    return student>m ? false:true;
}

int allocateBook(vector<int>arr,int n, int m){
    if(m>n) return -1;
    int sum=0;
    for(int i=0;i<n;i++){
        sum +=arr[i];
    }

    int st=0;
    int end=sum;
    int ans=-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(isValid(arr,n,m,mid)){
            ans=mid;
            end=mid-1;
        }else{
            st=mid+1;
        }
    }
}

int main(){
    vector<int>nums={2,1,3,4};
    int n=nums.size();
    int m=2;
    cout<<allocateBook(nums,n,m);
    return 0;
}