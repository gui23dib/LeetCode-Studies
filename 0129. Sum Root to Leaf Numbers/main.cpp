//https://leetcode.com/problems/sum-root-to-leaf-numbers/

#include <iostream>
#include "../definitions.h"

class Solution {
public:
    int dfs(TreeNode* node, int sum){
        if(!node) return 0;
        
        sum = (sum * 10) + node->val;

        if(!node->left && !node->right) return sum;
        return dfs(node->left, sum) + dfs(node->right, sum);
    }

    int sumNumbers(TreeNode* root) {
        return dfs(root, 0);
    }
};