//https://leetcode.com/problems/word-search

#include <iostream>
#include "../definitions.h"
#include <unordered_map>
#include <vector>

class Solution {
public:
    bool adj_search(int i, int j, int idx, vector<vector<char>>& board, string word){
        if(idx == word.size()) return true;
        if(i < 0 || j < 0 || i >= board.size() || j >= board[0].size() || board[i][j] != word[idx]){
            return false;
        }

        board[i][j] = ' ';

        bool answer = adj_search(i + 1, j, idx + 1, board, word) ||
                      adj_search(i, j + 1, idx + 1, board, word) ||
                      adj_search(i - 1, j, idx + 1, board, word) ||
                      adj_search(i, j - 1, idx + 1, board, word);
        
        if(answer) return answer;

        board[i][j] = word[idx];
        return false;
    }

    bool exist(vector<vector<char>>& board, string word) {
        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[0].size(); j++) {
                if (board[i][j] == word[0]) {
                    bool answer = adj_search(i, j, 0, board, word);
                    if(answer) return answer;
                }
            }
        }
        return false;
    }
};