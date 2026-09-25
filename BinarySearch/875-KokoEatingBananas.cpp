#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int end =  *max_element(piles.begin(), piles.end());;
        int ans = end;
        int start = 1;
        while(start<=end){
            int mid =  start + (end-start)/2;
            long int sum = 0;
            for(int i = 0;i<n;i++){
                sum+=(piles[i]+mid-1)/mid;
            }
            if(sum<=h){
                ans=mid;
                end=mid-1;
            }
            else start=mid+1;
        }
        return ans;
    }
};