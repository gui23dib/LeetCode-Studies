/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

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

    void reorderList(ListNode* head) {
        if(!head || !head->next) return;

        ListNode* reversedHalf = halfLinkedList(reverseLinkedList(head));

        while(reversedHalf) {
            ListNode* nextNode = head->next;
            head->next = reversedHalf;
            head = reversedHalf;
            reversedHalf = nextNode;
        }
    }
};