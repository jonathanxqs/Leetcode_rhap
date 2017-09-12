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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l1r, *l2r,*p,*q;
        std::vector<ListNode *> v1,v2;
        p = l1, q = l2;
        while (p != nullptr) {
            v1.push_back(p);
            p = p->next;
        }
        

        while (q != nullptr) {
            v2.push_back(q);
            q = q->next;
        }
        
        l1r = q;
        for (auto p:v1.reverse()){
            q -> next = p;
            q = p;
        }
        q ->next = nullptr;
        
        l1r = l1r -> next;

        l1r = q;
        for (auto p:v1.reverse()){
            q -> next = p;
            q = p;
        }
        l1r = l1r -> next;




    }
};