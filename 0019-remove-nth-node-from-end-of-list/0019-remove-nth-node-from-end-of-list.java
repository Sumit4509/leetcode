/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode removeNthFromEnd(ListNode head, int n) {
        if(head==null){
            return null;
        }
        ListNode curr= head;
        int size = 0;
        
        while(curr!=null){
            size++;
            curr=curr.next;
        }
        if(size==n){
            return head.next;
        }
        int it= size-n;
        
        ListNode curr2= head;
        int i =1;
        while(i<it){
            curr2=curr2.next;
            i++;
        }
        curr2.next = curr2.next.next;
        return head;
    }
}