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
    int getDecimalValue(ListNode* head) {
        vector<int> arr;
        int count=0;
        ListNode *curr=head;
        while(curr!=NULL){
            int value=curr->val;
            arr.push_back(value);
            curr=curr->next;
            count++;
        }

        long long int ans=0;
        for(int i=count-1;i>=0;i--){
            ans=ans+(arr[i]*pow(2,count-i-1));
        }
        return ans;
    }
};