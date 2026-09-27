#include<bits/stdc++.h>
using namespace std;

class Solution {
private:
    int check(int mid, int n, int m){
        long long ans = 1;
        for(int i =1;i<=n;i++){
            ans=ans*mid;
            if(ans>m) return 2;
        }
        if(ans==m) return 1;
        else return 0;
    }
public:
    int nthRoot(int n, int m) {
        if (m == 0) return 0;
        int low =1;
        int high =m;
        while(high>=low){
            int mid = low +(high-low)/2;
            int powcheck=check(mid,n,m);
            if(powcheck==1){
                return mid;
            }
            else if(powcheck==0){
                low = mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return -1;
    }
};