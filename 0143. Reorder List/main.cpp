//https://leetcode.com/problems/reorder-list/

#include <iostream>
#include "../definitions.h"

class Solution {
public:
    ListNode * reverseLinkedList(ListNode * head){
        if(!head) return NULL;

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

    ListNode* halfLinkedList(ListNode * head){
        ListNode *slow = head;
        ListNode *fast = head;
        ListNode *prev = head;
        while(fast && fast->next){
            prev = slow;
            fast = fast->next->next;
            slow = slow->next;
        }
        prev->next = NULL;
        return slow;
    }

    void reorderList(ListNode* head) {
        if(!head || !head->next) return;

        ListNode *reversedHalf = reverseLinkedList(halfLinkedList(head));
        while(reversedHalf) {
            ListNode  *nextNode = head->next;
            head->next = reversedHalf;
            head = reversedHalf;
            reversedHalf = nextNode;
        }
    }
};