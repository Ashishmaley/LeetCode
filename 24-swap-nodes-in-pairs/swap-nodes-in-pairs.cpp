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
        if(head==nullptr)return head;
        if(head->next==nullptr)
        return head;
        ListNode* curr=head->next;
        ListNode* prev=head;
        ListNode* nextt=curr->next;
        prev->next=nextt;
        curr->next=prev;
        head=curr;
        curr=nextt;
        while(curr!=nullptr&&curr->next!=nullptr){
            nextt=curr->next;
            prev->next=nextt;
            curr->next=nextt->next;
            nextt->next=curr;
            prev=curr;
            curr=curr->next;
        }
        return head;
    }
};