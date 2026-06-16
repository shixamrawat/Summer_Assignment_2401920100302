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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* h1=list1;    
        ListNode* h2=list2;   
        // a dummy node whose next element is the start of our new string
        ListNode dummy(-1);   
        ListNode* temp=&dummy;
        while(h1!=nullptr && h2!=nullptr){
            // if h1 val is smaller it get added
            if(h1->val<=h2->val){
                temp->next=h1;
                h1=h1->next;
            }
            // if h2 val is smaller it get added
            else{
                temp->next=h2;
                h2=h2->next;
            }
            // move temp
            temp = temp->next;
        } 
        // if elements left in h1 add them to list
        if(h1){
            temp->next=h1;
        }
        // if elements left in h2 add them to list
        else{
            temp->next=h2;
        }
        return dummy.next;
    }
};