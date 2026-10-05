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
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;
        while(curr != NULL){
         ListNode* next = curr->next; // preseve the next node add , so that we can reach
         curr->next=prev; //replace the current next with prev node address
         prev = curr;  // for the next node current will be prev
         curr =next;    // move current too the next node to repeat the procees
        }
        return prev;
    }
};