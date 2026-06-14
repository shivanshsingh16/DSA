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
        ListNode* slow=head;ListNode* fast= head;
        while (fast!=nullptr&&fast->next!=nullptr)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        stack<ListNode*> stk;

        ListNode* for_true=slow;
        while (slow!=nullptr)
        {
            stk.push(slow);
            slow=slow->next;
        }
        int sum=INT_MIN;
        ListNode* for_sum=head;
        while (for_sum!=for_true)
        {   
            ListNode* temp=stk.top();
            int sumation= temp->val+for_sum->val;
            sum=max(sum, sumation);
            for_sum=for_sum->next;
            stk.pop();
        }
        return sum;
        

        
        
    }
};