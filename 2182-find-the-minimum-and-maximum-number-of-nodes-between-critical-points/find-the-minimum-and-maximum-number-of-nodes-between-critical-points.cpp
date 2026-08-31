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
vector<int> nodesBetweenCriticalPoints(ListNode* head) {
            vector<int> arr={};
            vector<int> result={};
           ListNode* prev=head;
           ListNode* temp=head->next;
           ListNode* nxt=temp->next;
           int i=2;
           while (temp->next!=nullptr)
           {
                if (prev->val>temp->val&&temp->val<nxt->val)
                {
                    arr.push_back(i);
                }
                else if (prev->val<temp->val&& temp->val>nxt->val)
                {
                    arr.push_back(i);
                }
                i++;
                prev=prev->next;
                nxt=nxt->next;
                temp=temp->next;
           }
           if (arr.size()<2)
           {
                result={-1,-1};
                return result;
           }
           int ans=INT_MAX;
           for (int i = 1; i < arr.size(); i++)
           {
            ans=min(ans,arr[i]-arr[i-1]);
           }
           result.push_back(ans);
           result.push_back(arr[arr.size()-1]-arr[0]);
           return result;
           
           
           
    }
};