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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count=0;
        ListNode* temp=head;
        if(head->next==nullptr||head==nullptr)return {};
        while(temp!=nullptr){
            count++;
            temp=temp->next;
        }
        temp=head;
        ListNode* nextt=head;
        if(count==n)return head->next;
        int l=count-n-1;
        while(l>0){
            temp=temp->next;
            l--;
        }
        nextt=temp->next;
        if(temp->next==nullptr)
        temp==nullptr;
        else
        temp->next=nextt->next;
        return head;
    }
};