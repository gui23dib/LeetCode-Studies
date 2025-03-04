//https://leetcode.com/problems/valid-anagram

#include <iostream>
#include <unordered_map>
#include "../definitions.h"

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;

        unordered_map<char, int> a;
        unordered_map<char, int> b;
        
        for(int i = 0 ; i < s.size() ; i++){
            a[s[i]]++;
            b[t[i]]++;
        }
        
        return a == b;
    }
};