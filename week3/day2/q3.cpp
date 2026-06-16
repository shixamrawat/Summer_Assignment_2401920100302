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
    ListNode* reversell(ListNode* head){
        ListNode* curr=head;
        ListNode* prev=nullptr;
        ListNode* next=nullptr;
        while(curr!=nullptr){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    } 
    bool isPalindrome(ListNode* head) {
        //find the middle  element
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next!=nullptr && fast->next->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
        }
        //reverse the 2nd half of the linked list
        ListNode* secondhead=reversell(slow->next);
        //compare the 1st and 2nd half
        ListNode* head1=head;
        ListNode* head2=secondhead;
        while(head2!=nullptr){
            if(head1->val!=head2->val){
                reversell(secondhead);
                return false;
            }
            head1=head1->next;
            head2=head2->next;
        }
        reversell(secondhead);
        return true;

    }
};