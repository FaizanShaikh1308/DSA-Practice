#include<iostream>
#include<climits>
#include<vector>
using namespace std;

bool isValid(int arr[],int mid,int m,int n){
    int p=1;
    int t=0;
    for(int i=0;i<n;i++){
        if(t+arr[i]<=mid){
            t=t+arr[i];
        }else{
            p++;
            t=arr[i];
        }
    }
    return p<=m ? true:false;
}

int time(int arr[],int m, int n){
    int st=0;
    int end=0;
    for(int i=0;i<n;i++){
        st=max(st,arr[i]);
    }
    for(int i=0;i<n;i++){
        end +=arr[i];
    }
    int ans=0;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(isValid(arr,mid,m,n)){
            end=mid-1;
            ans=mid;
        }else{
            st=mid+1;
        }
    }
    return ans;
}

int main(){
    int arr[]={40,30,10,20};
    int m=2;
    int n=4;
    cout<<time(arr,m,n);
}