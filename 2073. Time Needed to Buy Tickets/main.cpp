// https://leetcode.com/problems/time-needed-to-buy-tickets/

#include <iostream>
#include <vector>
#include "../definitions.h"

class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int time = 0;
        int target = tickets[k];

        for(int i = 0 ; i < tickets.size() ; i++){
            int temp = i > k ? target - 1 : target;
            time += min(temp, tickets[i]);
        }
        
        return time;
    }
};