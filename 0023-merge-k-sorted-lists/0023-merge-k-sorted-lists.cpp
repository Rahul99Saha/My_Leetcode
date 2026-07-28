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
    ListNode* merge(ListNode* a ,ListNode* b){
        ListNode* c = new ListNode(-1);
        ListNode* ptr = c;
        while(a!=NULL && b!=NULL){
            if(a->val <= b->val){
                ptr->next = a;
                a = a->next;
            }
            else{
                ptr->next = b;
                b = b->next;
            }
            ptr=ptr->next;
        }
        if(b!=NULL){
            ptr->next = b;
        }
        if(a!=NULL){
            ptr->next = a;
        }
        return c->next;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int k = lists.size();
        if (k == 0)
            return NULL;
        ListNode* a = lists[0];
        for(int i = 0;i<k-1;i++){
            ListNode* b = lists[i+1];
            a = merge(a,b);
        }
        return a;
    }
};