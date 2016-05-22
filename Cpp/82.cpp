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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* p= head;
        ListNode* t1=p;ListNode* t2= p; 
        while (t1) 
        {
            t2=t1;
            while (t2->val==t1->val){
                t2=t2->next;
            }
            t1->next=t2;
            
        }
        return p;
        }
    
};