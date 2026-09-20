#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverseDegree(string s) {
        int sum = 0;
        for(int i = 0; i< s.length();i++){
            char c = s[i];
            if(isalpha(c)){
                int pos = tolower(c) - 'a';
                int ogpos = 26 - pos;
                int prod = ogpos * (i+1);
                sum+=prod;
            }
        }
        return sum;
    }
};