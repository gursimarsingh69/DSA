#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        int n = arr.size();
        int start = 0;
        int end = n-1;
        while(start<end){
            int mid = start + (end - start)/2;
            if(arr[mid]>arr[end]) start = mid + 1;
            else end = mid;
        }
        return end;
    }
};