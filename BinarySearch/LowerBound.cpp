
#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int lowerBound(vector<int>& arr, int target) {
        int start = 0;
        int end = arr.size() -1;
        int res = arr.size();
        while(start<=end){
            int mid = start + (end -start)/2;
            if(arr[mid] >= target){
                res = mid;
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
            
        }
        return res;
    }
};
