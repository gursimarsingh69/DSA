#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int maxProd=nums[0];
        for(int i = 0; i<n ;i++){
            int product=1;
            for(int j = i; j<n;j++){
                product =product*nums[j];
                maxProd = max(maxProd,product);
            }
        }
        return maxProd;
    }
};