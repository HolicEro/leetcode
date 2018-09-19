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
    ListNode* removeElements(ListNode* head, int val) {
        
        while(head){
            if(head->val == val) head=head->next;
            else break;
        }
        ListNode *p = head;
        while(p&&p->next){
            if(p->next->val == val){
                if(p->next->next){
                    p->next = p->next->next;
                }
                else p->next =NULL;
                
            }
            else p = p->next;
        }
        return head;
    }
};