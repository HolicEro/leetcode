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
    ListNode* reverseList(ListNode* head) {
        if(head == NULL) return NULL;
        stack<int> s;
        ListNode *p = new ListNode(0);
        ListNode *q = p;
        while(head){
            s.push(head->val);
            head = head->next;
        }
        
        while(s.size() > 0){
            p->val = s.top();
            s.pop();
            if(s.size() == 0) break;
            p->next = new ListNode(0);
            p = p->next;
        }
        return q;
    }
};