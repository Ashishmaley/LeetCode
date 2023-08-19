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

ListNode* solve(ListNode* head,int k){
        if(head==nullptr||head->next==nullptr){
            return head;
        }
        ListNode* prev=nullptr;
        ListNode* curr=head;
        ListNode* next=curr->next;
        int n=k;
        int count=0;
        while(curr!=nullptr){
            count++;
            curr=curr->next;
        }
        if(count<k){
            return head;
        }
        curr=head;
        while(n>0&&(next!=nullptr)){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            n--;
        }
        head->next=solve(next,k);
        return prev;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        return solve(head,k);
    }
};