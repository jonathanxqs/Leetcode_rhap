/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* first = dummy;
        ListNode* second = dummy;

        // Advances first pointer so that the gap between first and second is n nodes apart
        for (int i = 1; i <= n + 1; i++) {
            first = first->next;
        }
        // Move first to the end, maintaining the gap
        while (first != nullptr ) {
            first = first->next;
            second = second->next;
        }
        second->next = second->next->next;
        return dummy->next;
        
    }
    

};

// Runtime: 6 ms