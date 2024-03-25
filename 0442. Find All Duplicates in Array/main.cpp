// https://leetcode.com/problems/find-all-duplicates-in-an-array

#include <iostream>
#include "../definitions.h"
#include <unordered_map>
#include <vector>

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int, int> map; 
        vector<int> result;

        for(int num : nums){
            if(map[num]) result.push_back(num);
            else map[num] = 1;
        }

        return result;
    }
};