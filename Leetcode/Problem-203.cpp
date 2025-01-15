/*
#Developed by yash jangid
#Github-Link -> https://github.com/yash-jangid-21
*/
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL) return head;
        if(head->val==val) return removeElements(head->next,val);
        ListNode *newhead = head;
        while(head->next!=NULL){
            if(head->next->val==val){
               head->next  = head->next->next;
            }
           else  head = head->next;
        }
        return newhead;
    }
};
