/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        //tortoise and hare 
        ListNode* slow=head;
        ListNode* fast=head;
        //if loop exist then fast is moving by 2 and slow by 1 that meanse 
        //fast is moving towards slow by 1 and hence will always meet
        //if loop does not exist while condition will become true and we will return false
        while(fast!=nullptr && fast->next!=nullptr){
            slow=slow->next;//1 step
            fast=fast->next->next;  //2 step
            if(slow==fast){
                return true;
            }
        }
        return false;
    }
};