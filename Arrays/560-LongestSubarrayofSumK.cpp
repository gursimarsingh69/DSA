#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> preSumCount;
        int n = nums.size();
        int preSum=0;
        preSumCount[0]=1;
        int count=0;
        for(int i =0; i<n;i++){
            preSum+=nums[i];
            int remainder=preSum-k;
            if(preSumCount.find(remainder)!=preSumCount.end()) count+=preSumCount[remainder];
            preSumCount[preSum]++;
        }
        return count;
    }
};