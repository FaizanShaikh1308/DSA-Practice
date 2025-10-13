#include<iostream>
#include<vector>
#include<climits>
using namespace std;

// int main(){
//     int arr[]={-3,2,-4,5,7,-8};
//     int n=sizeof(arr)/4;
//     int maxSum=INT_MIN;
//     int curSum=0;
//     for(int i=0;i<n;i++){
//         curSum=curSum+arr[i];
//         maxSum=max(curSum, maxSum);
//         if(curSum<0) curSum=0;
//     }
//     cout<<maxSum;
// }

int main(){
     int arr[]={-3,2,-4,5,7,-8};
    int n=sizeof(arr)/4;
    int maxSum=INT_MIN;
    int curSum=0;
    int start=0; int end=0; int tempstart=0;
    for(int i=0;i<n;i++){
        curSum=curSum+arr[i];

        if(curSum>maxSum){
            maxSum=curSum;
            start=tempstart;
            end=i;
        }
        if(curSum<0){
            curSum=0;
            tempstart=i+1;
        }
    }
    cout<<maxSum<<endl;
    cout<<"Subarray: ";
    for(int i=start;i<=end;i++){
        cout<<arr[i];
        if(i<end){
            cout<<",";
        }
    }

}