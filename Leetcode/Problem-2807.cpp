/*
#Developed by yash jangid
#Github-Link -> https://github.com/yash-jangid-21
*/
class Solution {
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode *newhead = head;
        while(head->next!=NULL){
            int x = head->val;
            int y = head->next->val;
            int gcd = __gcd(x,y);
            ListNode *tmp = head->next;
            head->next = new ListNode;
            head->next->val = gcd;
            head->next->next = tmp;
            head = tmp;
        }
        return newhead;
    }
};
