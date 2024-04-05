//https://leetcode.com/problems/make-the-string-great/

#include "../definitions.h"
#include <string>

class Solution {
public:
    string makeGood(string s) {
        bool goodString = false;

        while(!goodString && s.size() > 0){
            goodString = true;

            for(int i = 0 ; i < s.size() - 1 ; i++){
                if(abs((int)s[i] - (int)s[i + 1]) == 32){
                    s.erase(i, 2);
                    goodString = false;
                    break;
                } 
            }
        }

        return s;
    }
};