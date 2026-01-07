
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
    ListNode* swapPairs(ListNode* head) {
        ListNode *t = new ListNode(0, head);
        head=t;
        while(t->next && t->next->next){
            ListNode *p = t->next;
            ListNode *q = p->next;
            p->next=q->next;
            q->next=p;
            t->next=q;
            t=p;
        }
        return head->next;
    }
};