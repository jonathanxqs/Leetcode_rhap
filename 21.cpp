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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* p = l1;
        ListNode* q = l2;
        
        ListNode* h = new ListNode(0);
        ListNode* t = h;
        
        while (p!=nullptr or q!=nullptr){
            if (q==nullptr or (p!=nullptr and p->val < q->val) ){
                t->next = p;
                t = p;
                p = p->next;
            }
            else {
                t->next = q;
                t = q;
                q = q->next;
            }
        }
        
        return h->next;
        
        
        
    }
};