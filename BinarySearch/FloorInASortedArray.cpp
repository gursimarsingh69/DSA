#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int findFloor(vector<int>& arr, int x) {
        int start = 0;
        int end = arr.size()-1;
        int res = -1;
        while(start<=end){
            int mid = start + (end-start)/2;
            if(arr[mid]<=x){
                res = mid;
                start = mid + 1;
            }
            else if(arr[mid]>x){
                end = mid - 1;
            }
        }
        return res;
    }
};
