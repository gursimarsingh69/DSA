#include<bits/stdc++.h>
using namespace std;

int LinearSearch(vector<int>nums, int target,int index=0){
    int n = nums.size();
    if(index>=n) return -1;
    if(nums[index]==target) return index;
    return LinearSearch(nums,target,index+1);
}   