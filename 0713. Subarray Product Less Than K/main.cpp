// https://leetcode.com/problems/subarray-product-less-than-k/description/

#include <iostream>
#include "../definitions.h"
#include <unordered_map>
#include <vector>

class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k <= 0) return 0;

        int fast = 0, slow = 0, prod = 1, ans = 0;

        while (slow < nums.size()) {
            prod *= nums[slow];
            slow++;
            while (fast < slow && prod >= k) {
                prod /= nums[fast];
                fast++;
            }
            ans += slow - fast;
        }

        return ans;
    }
};