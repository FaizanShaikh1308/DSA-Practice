#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int st = 0;
        int end = arr.size() - 1;
        
        // We know the peak exists and is not at boundaries
        // So we can search in range [1, n-2]
        while (st < end) {
            int mid = st + (end - st) / 2;
            
            // Compare mid with mid+1 to decide which half to search
            if (arr[mid] < arr[mid + 1]) {
                // Peak is in the right half
                st = mid + 1;
            } else {
                // Peak is in the left half (including mid)
                end = mid;
            }
        }
        
        // When st == end, we've found the peak
        return st;
    }
};