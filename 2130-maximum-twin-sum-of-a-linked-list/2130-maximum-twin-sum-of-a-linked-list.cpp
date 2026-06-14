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
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL,* curr = head,* nextNode = NULL;
        while (curr != NULL) {
            nextNode = curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextNode;
        }
        return prev; 
    }
    int pairSum(ListNode* head) {
        ListNode *p = head;
        ListNode *q = head;
        int maxi=0;
        while(q!=NULL && q->next!=NULL){
            q = q->next->next;
            p = p ->next;
        }
        p=reverseList(p);
        while(p != NULL){
            maxi = max((p->val+head->val),maxi);
            head = head->next;
            p = p->next;
        }
        return maxi;
    }
};