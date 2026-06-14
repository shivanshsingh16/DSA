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
    int pairSum(ListNode* head) {
        ListNode* slow=head ; ListNode* fast=head;
        stack<int> stk;
        while (fast!=nullptr)
        {
            stk.push(slow->val);
            slow=slow->next;
            fast=fast->next->next;
        }

        int sum=-1;
        while (slow!=nullptr&&stk.top())
        {
            sum=max(sum, stk.top()+slow->val);
            stk.pop();slow=slow->next;
        }
        return sum;
        
    }
};