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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2){
        stack<int>stk1;
        stack<int> stk2;
        
        ListNode* temp1=l1;
        ListNode* temp2=l2;
    
        while (temp1!=nullptr)
        {
            stk1.push(temp1->val);
            temp1=temp1->next;
        }
         while (temp2!=nullptr)
        {
            stk2.push(temp2->val);
            temp2=temp2->next;
        }
        ListNode* prev=nullptr;
        int carry=0;
        while (!stk1.empty()||!stk2.empty())
        {
            int sum= carry;
            if (!stk1.empty())
            {
                sum+=stk1.top();
                stk1.pop();
            }
            if (!stk2.empty())
            {
                sum+=stk2.top();
                stk2.pop();
            }
            ListNode* ahead= new ListNode(sum%10);
            carry=sum/10;
            ahead->next=prev;
            prev=ahead;
        }
        if (carry)
        {
            ListNode* ahead= new ListNode(carry);
            ahead->next=prev;
            prev=ahead;
        }
        return prev;
        
    }
};