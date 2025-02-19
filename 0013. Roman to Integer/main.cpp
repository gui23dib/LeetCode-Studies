//https://leetcode.com/problems/roman-to-integer

#include "../definitions.h"
#include <string>
#include <vector>

class Solution {
public:
    int romanToInt(string s) {
        int result = 0;

        for(int i = 0 ; i < s.size() ; i++){
            int c = conversion(s[i]);
            if(c >= conversion(s[i + 1])) result += c;
            else result -= c;
        }

        return result;
    }

private:
    int conversion(char c){
        if(c == 'I') return 1;
        if(c == 'V') return 5;
        if(c == 'X') return 10;
        if(c == 'L') return 50;
        if(c == 'C') return 100;
        if(c == 'D') return 500;
        if(c == 'M') return 1000;
        return 0;
    }
};