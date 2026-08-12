#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>hasht;    
        for(int i:nums) hasht[i]++;
        vector<int> result;
        int threshold = nums.size()/3;
        for(auto &[i,j] : hasht){
            if(j>threshold) result.push_back(i);
        }
        return result;
    }
};