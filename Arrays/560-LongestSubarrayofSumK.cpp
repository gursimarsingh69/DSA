#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int left = 0;
        int right = 0;
        long int sum = 0;
        int maxLength = 0;
        while (right < n) {
            sum += nums[right];
            while (left <= right && sum > k) {
                sum -= nums[left];
                left++;
            }
            if (sum == k) {
                maxLength = max(maxLength, right - left + 1);
            }
            right++;
        }
        return maxLength;
    }
};