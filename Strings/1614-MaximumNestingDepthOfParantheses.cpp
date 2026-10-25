#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxDepth(string s) {
        int count = 0;
        int maxcnt=0;
        for(auto i : s){
            if(i=='('){
                count++;
                maxcnt =  max(maxcnt,count);
            }
            else if(i==')') count--; 
        }
        return maxcnt;
    }
};