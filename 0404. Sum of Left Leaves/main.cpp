//https://leetcode.com/problems/sum-of-left-leaves/

#include <iostream>
#include "../definitions.h"

class Solution {
public:
    int dfs(TreeNode* node, bool isLeftNode){
        if(!node) return 0;
        if(!node->left &&  !node->right) return isLeftNode ? node->val : 0;
        return dfs(node->left, true) + dfs(node->right, false);
    }

    int sumOfLeftLeaves(TreeNode* root){
        return dfs(root, false);
    }
};