//https://leetcode.com/problems/find-the-duplicate-number/

#include <iostream>
#include "../definitions.h"
#include <unordered_map>
#include <vector>

class Solution {
public:
    int findDuplicate(vector<int>& nums) { 
        unordered_map<int, int> map; 
        //for some reason my compiler doesn't identify unordered_set, not really sure how to fix it but it worked wonder in leetcode

        for(int num : nums){
            if(map[num]) return num;
            else map[num] = num;
        }

        return -1;
    }
};