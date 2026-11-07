/*
 * DATE: 07/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/merge-two-sorted-lists/submissions/2191407670/
 * PROBLEM STATEMENT: Merge two sorted lists
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
#include <vector>
using namespace std;
struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL||list2==NULL){
            return list1==NULL?list2:list1;
        }
        if(list1->val <= list2->val){
            list1->next=mergeTwoLists(list1->next,list2);
            return list1;
        } else {
            list2->next=mergeTwoLists(list1,list2->next);
            return list2;
        }
    }
};
