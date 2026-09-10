#include<bits/stdc++.h>
using namespace std;

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private:
    int matchNodes=0;
    pair<int,int> postOrder(TreeNode* root){
        if(root==nullptr) return {0,0};
        auto left = postOrder(root->left);
        auto right = postOrder(root->right);
        int currSum= root->val + left.first + right.first;
        int cnt=1+left.second+right.second;
        if(root->val == currSum/cnt) matchNodes++;
        return {currSum,cnt};
    }
public:
    int averageOfSubtree(TreeNode* root) {
        matchNodes=0;
        postOrder(root);
        return matchNodes;
    }
};