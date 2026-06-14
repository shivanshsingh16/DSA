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
        while (fast->next->next!=nullptr)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* second=slow->next;
        ListNode* curr=head;
        ListNode* temp;
        ListNode* prev=nullptr;
        slow->next=nullptr;
        while (curr!=nullptr)
        {
            temp=curr->next;
            curr->next=prev;
            prev=curr;

            curr=temp;
        }
        ListNode* first=prev;
        

        int sum=-1;
        while (first!=nullptr&& second!=nullptr)
        {
            sum=max(sum, first->val+second->val);
            second=second->next;
            first=first->next;
        }
        return sum;
        
    }
};