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
    ListNode* rotateRight(ListNode* head, int k) {

        ListNode* temp = head;
        vector<int> list;
        

        while(temp != nullptr)
        {
            list.push_back(temp->val);
            temp = temp->next;
        }

        int n = list.size();
        vector<int> v(n, 0);

        for(int i=0; i<n; i++)
        {
            v[(i+k)%n] = list[i];
        }

        temp = head;
        int i=0;

        while(temp != nullptr)
        {
            temp->val = v[i];
            i++;

            temp = temp->next;
        }

        return head;
    }
};