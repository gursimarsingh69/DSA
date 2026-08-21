#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        if(nums.empty()) return{-1,-1};
        int start = 0;
        int end = n-1;
        vector<int> res = {-1,-1};
        while(start<=end){
            int mid = start + (end-start)/2;
            if(nums[mid]==target){
                if(mid==0 || nums[mid-1]!=target){
                    res[0] = mid;
                    break;
                }else{
                    end = mid -1;
                }
            }
            else if(nums[mid]>target) end = mid - 1;
            else start = mid + 1;
        }
        if(res[0]==-1) return res;

        start = 0; end = n-1;
        while(start<=end){
            int mid = start + (end-start)/2;
            if(nums[mid]==target){
                if(mid==n-1 || nums[mid+1]!=target){
                res[1] = mid;
                break;
                }
                start = mid + 1;
            }else if (nums[mid]>target) end= mid-1;
            else start = mid + 1;
        }
        return res;
    }
};