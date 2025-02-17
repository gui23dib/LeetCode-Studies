//https://leetcode.com/problems/occurrences-after-bigram/

#include "../definitions.h"
#include <string>
#include <vector>

class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        vector<string> sep_text = splitString(text);
        vector<string> result;

        for(int i = 2; i < sep_text.size(); i++){
            if(sep_text[i-1] == second && sep_text[i-2] == first){
                result.push_back(sep_text[i]);
            }
        }

        return result;
    }

private:
    vector<string> splitString(const string& str) {
        vector<string> result;
        istringstream iss(str);
        string word;
        while(iss >> word) {
            result.push_back(word);
        }
        return result;
    }
};
