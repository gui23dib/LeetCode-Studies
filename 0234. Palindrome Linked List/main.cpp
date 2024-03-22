//https://leetcode.com/problems/palindrome-linked-list/

#include <iostream>
#include "../definitions.h"


class Solution {
public:
    ListNode * reverseLinkedList(ListNode * head){
        ListNode* current = head;
        ListNode *prev = NULL, *next = NULL;

        while (current) {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        return prev;
    }

    ListNode * halfLinkedList(ListNode * head){
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast && fast->next){
            fast = fast->next->next;
            slow = slow->next;
        }

        return slow;
    }

    bool isPalindrome(ListNode* head) {
        if(!head || !head->next) return true;

        ListNode* reversedHalf = reverseLinkedList(halfLinkedList(head));

        while(reversedHalf){
            if(head->val != reversedHalf->val) return false;
            else {
                reversedHalf = reversedHalf->next;
                head = head->next;
            }
        }

        return true;
    }
};