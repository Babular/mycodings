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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == NULL){
            return head ;
        }
        ListNode *fast = head, *slow= head , *prev= NULL;

        for(int i=1;i<n;i++){
            fast = fast ->next ;
            if(fast == NULL){ // checks if (n > list Size)
                return head ;
            }
        }


        while(fast ->next != NULL){
            fast = fast->next ;
            prev = slow ;
            slow = slow->next ;
        }

        if(prev == NULL ){ // slow at head
            ListNode *temp = head ;
            head = head ->next ;
            delete temp ;
            return head ;
        }

        prev ->next = slow->next ;
        delete slow ;
        return head ;
        
    }
};