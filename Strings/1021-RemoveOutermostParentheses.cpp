#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeOuterParentheses(string s) {
        string res = "";
        stack<char> stk;
        for(auto i : s){
            if(i==')') stk.pop();
            if(!stk.empty()) res.push_back(i);
            if(i=='(') stk.emplace(i);
        }
        return res;
    }
};