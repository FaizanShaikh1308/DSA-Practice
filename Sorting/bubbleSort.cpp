#include<iostream>
#include<algorithm>
using namespace std;

void bubbleSort(int nums[],int n){
    for(int i=0;i<n-1;i++){
        bool isSwap=false;
        for(int j=0;j<n-i-1;j++){
            if(nums[j]>nums[j+1]){
                swap(nums[j],nums[j+1]);
                isSwap=true;
            }
        }
        if(!isSwap){
            for(int i =0;i<n;i++){
            cout<<nums[i]<<" ";
            }
            return;
        }
    }
    
}
void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int smallestIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[smallestIndex]){
                smallestIndex=j;
            }
        }
        swap(arr[i],arr[smallestIndex]);
    }
}

void insertionSort(int arr[], int n){
    for(int i=1;i<n;i++){
        int curr=arr[i];
        int prev=i-1;
        while(prev >= 0 && arr[prev]>curr){
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]=curr;
    }
}

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[]={4,1,5,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    // bubbleSort(arr,n);
    // selectionSort(arr,n);
    insertionSort(arr,n);
    printArray(arr,n);
    return 0;
}