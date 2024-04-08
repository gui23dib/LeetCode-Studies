//https://leetcode.com/problems/number-of-students-unable-to-eat-lunch/

#include <iostream>
#include <vector>
#include "../definitions.h"

class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int count = 0;
        while(students.size() > 0){
            if(students.front() == sandwiches.front()){
                students.erase(students.begin()); //pop_front
                sandwiches.erase(sandwiches.begin()); //pop_front
                count = 0;
            } else {
                students.push_back(students.front()); //push(pop())
                students.erase(students.begin());
                if(++count >= students.size()) return students.size();
            }
        }

        return 0;
    }
};