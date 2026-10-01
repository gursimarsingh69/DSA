#include<bits/stdc++.h>
using namespace std;

int BinarySearch(vector<int>nums,int target,int start,int end){
    int n = nums.size();
    if(start>end) return -1;
    int mid = start +  (end - start)/2;
    if(nums[mid]==target) return mid;
    else if(nums[mid]<target) return BinarySearch(nums,target,mid+1,end);
    else return BinarySearch(nums,target,start,mid-1);
}