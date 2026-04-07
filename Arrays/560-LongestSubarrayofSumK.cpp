#include <bits/stdc++.h>
using namespace std;

int longestSubarray(vector <int> &nums, int k){
    int n=nums.size();
    int maxLength=0;

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++) {
            int sum = 0;
            for(int p=i;p<=j;p++){
                sum+=nums[p];
            }
            if (sum==k) maxLength=max(maxLength,j-i+1);
        }
    }
    return maxLength;
}