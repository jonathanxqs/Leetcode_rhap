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

        p = l1 , q =l2;
        ListNode *ret1 = new ListNode(0) , 
        *t1=ret1 ,
        *t2=ret1;

        int jw =0 ,sum1 = 0;
        while (p or q){
            sum1 = jw;
            if (p) { sum1 += p->val;  p=p->next; }
            if (q) {  sum1 += q->val;  q= q->next; }
            
            jw = sum1 / 10;
            sum1 = sum1 % 10;
            t1 = new ListNode(sum1);
            t2-> next = t1;
            t2 = t1;
             

        }

        while (jw) {
           
            sum1 = jw % 10;
             jw = jw / 10;
            t1 = new ListNode(sum1);
            t2-> next = t1;
            t2 = t1;
        }

        t2->next = NULL;
        return ret1->next;




    }
};