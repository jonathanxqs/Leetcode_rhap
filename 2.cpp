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
        

        p = l1r , q =l2r;
        ListNode *ret1 = new ListNode(0) , t1 ,t2;
        int jw =0 ,sum1 = 0;
        while (p or q){
            if (p) sum1 += p->val;
            if (q) sum1 += q->val;
            sum1 += jw;
            jw = sum1 / 10;
            sum1 = sum1 % 10;
            t1 = new ListNode(sum1);

        }




    }
};