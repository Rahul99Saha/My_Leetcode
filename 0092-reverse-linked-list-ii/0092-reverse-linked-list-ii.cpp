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
    ListNode* reverseBetween(ListNode* head, int left, int right) 
    {
        ListNode* t=new ListNode(0);
        int count=1;
        t->next = head;
        ListNode* prev=t; 
        while(count<left)
        {
            count++;
            prev = prev->next;
        }
        ListNode* curr=prev->next;
        ListNode* newnode = nullptr;
        while(count<right)
        {
            newnode=curr->next;
            curr->next = newnode->next;
            newnode->next = prev->next;
            prev->next = newnode;
            count++;
        }
        head=t->next;
        delete t;
        return head;   
    }
};