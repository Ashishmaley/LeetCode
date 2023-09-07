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
    public ListNode reverseBetween(ListNode head, int left, int right) {
        if(left==right)return head;
        ListNode dummy=new ListNode(-1);
        dummy.next=head;
        ListNode prev=dummy;

        for(int i=0;i<left-1;i++){
            prev=prev.next;
        }

        ListNode curr = prev.next;
        ListNode next;
        for(int i = 0;i<right-left;i++){
            next=curr.next;
            curr.next=next.next;
            next.next=prev.next;
            prev.next=next;
        } 
        return dummy.next;
    }
}