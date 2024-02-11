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
    int length_ll(ListNode* head)
    {
        int count_node=0;
        ListNode *ptr=head;
        while(ptr!=NULL)
        {
            count_node++;
            ptr=ptr->next;
        }
        return count_node;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        int len=length_ll(head);
        if(len==1)
            return NULL;
        if(len==n)
            return head->next;
        int node_number=0;
        ListNode *ptr=head;
        while( node_number < len-n-1 )
        {
            ptr=ptr->next;
            node_number++;
        }
        ptr->next=ptr->next->next;
        return head;
    }
};