/*
#Developed by yash jangid
#Github-Link -> https://github.com/yash-jangid-21
*/
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL) return NULL;
        ListNode *newhead = head;
        while(head->next!=NULL){
            if(head->val == head->next->val){
                head->next  = head->next->next;
            }
           else head = head->next;
        }
        return newhead;
    }
};
