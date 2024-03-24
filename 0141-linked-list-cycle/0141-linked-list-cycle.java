/**
 * Definition for singly-linked list.
 * class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public boolean hasCycle(ListNode head) {
        ListNode pajji =head;
        ListNode kshitij = head;
        while(pajji!=null&&pajji.next!=null){
         pajji=pajji.next.next;
         kshitij=kshitij.next;
         if(pajji==kshitij){
             return true ;
         }
        }
        return false ;
    }
}