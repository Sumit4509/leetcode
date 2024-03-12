class Solution {
public:
    ListNode* removeZeroSumSublists(ListNode* head) {
        int prefixSum = 0;
        unordered_map<int,ListNode*>mp;
        ListNode *dummy = new ListNode(0);
        dummy->next = head;
        mp[0] = dummy;
        while(head != NULL){
            prefixSum += head->val;
            if(mp.find(prefixSum) != mp.end()){
                //delete the node
                ListNode *start = mp[prefixSum];
                ListNode *temp = start;
                int pSum = prefixSum;
                while(temp != head){
                    temp = temp->next;
                    pSum += temp->val;
                    if(temp != head)
                        mp.erase(pSum);
                }
                start->next = head->next;
            }
            else{
                mp[prefixSum] = head;
            }
            head = head->next;
        }
        return dummy->next;
    }
};