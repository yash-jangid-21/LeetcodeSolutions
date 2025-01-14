/*
#Developed by yash jangid
#Github-Link -> https://github.com/yash-jangid-21
*/
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        vector <int> binary;
        while(head != NULL){
            binary.push_back(head->val);
            head = head->next;
        }
        int cal = 0;
       for(int i = binary.size()-1,k=0;i>=0;i--,k++){
          cal += (binary[i] * pow(2,k));
       }
       return cal;
    }
};
