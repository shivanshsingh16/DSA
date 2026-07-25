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
   ListNode* swapPairs(ListNode* head) {
        if (!head || !head->next) return head;
        stack<ListNode*> st;
        ListNode* new_head=nullptr;
        ListNode* dummy = new ListNode(-1);
        ListNode* temp=head;
        while (temp!=nullptr)
        {
            st.push(temp);
            temp=temp->next;
            if (st.size()==2)
            {
                dummy->next=st.top();
                st.pop();
                dummy=dummy->next;
                if (new_head==nullptr)
                {
                    new_head=dummy;
                }
                dummy->next=st.top();
                st.pop();
                dummy=dummy->next;
                
            }
            
        }
        if (st.size()==1)
        {
            dummy->next=st.top();
            st.pop();
            dummy=dummy->next;
        }
        dummy->next=nullptr;
        return new_head;
        return new_head;
        
    }
};