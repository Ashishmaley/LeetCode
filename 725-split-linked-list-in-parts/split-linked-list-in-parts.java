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
public ListNode[] splitListToParts(ListNode head, int k) {
        int count=0;
        ListNode curr=head;
        ListNode[] li=new ListNode[k]; 
        int index=0;
        while(curr!=null){
            count++;
            curr=curr.next;
        }
        int div=count/k;
        int rem=count%k;
        curr=head;
        ListNode prev=null;
        while(curr!=null){
            int partsize=div;
            li[index++]=curr;
            while(partsize-->0){
                prev=curr;
                curr=curr.next;
            }
            if(rem>0){
                prev=curr;
                curr=curr.next;
                rem--;
            }
            if(prev!=null)
            {
                prev.next=null;
            }
        }
        return li;
    }
}