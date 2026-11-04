/*
 * DATE: 04/11/2026
 *
 * PROBLEM LINK:https://leetcode.com/problems/remove-duplicates-from-sorted-list/ 
 * PROBLEM STATEMENT: 
 *
 * ----------------------------------------
 * Write statement notes here
 * ----------------------------------------
 *
 * INSIGHTS GAINED FROM THIS QUESTION:
 * (Notes, ideas, tricks for quick revision)
 *
 * ----------------------------------------
 * Write insights here
 * ----------------------------------------
 */
#include <iostream>
struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* current=head;
        while(current!=nullptr&&current->next!=nullptr){
            if (current->val == current->next->val)
            {
            ListNode* temp = current->next;
            current->next = current->next->next;
            delete temp;
        }
        else
        {
        current = current->next;
        }
    }
    return head;
    }
};