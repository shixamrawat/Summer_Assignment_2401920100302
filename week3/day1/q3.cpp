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
    ListNode* middleNode(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        // as the fast move twice the speed of slow so
        // when fast will be at the end of the link slow will halfway there
        while(fast!=nullptr && fast->next!= nullptr){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
};