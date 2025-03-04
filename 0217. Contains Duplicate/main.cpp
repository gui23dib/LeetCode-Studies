//https://leetcode.com/problems/contains-duplicate

#include <iostream>
#include <unordered_map>
#include "../definitions.h"

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> dict;
        
        for(int num : nums){
            dict[num]++;
            if(dict[num] > 1) return true;
        }

        return false;
    }
};