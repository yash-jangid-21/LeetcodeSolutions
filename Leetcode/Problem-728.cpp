/*
#Developed by yash jangid
#Github-Link -> https://github.com/yash-jangid-21
*/
class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> arr;
        for(int i = left;i<=right;i++){
             int num = i;
        bool x = true;
        while (num > 0) {
            int digit = num % 10; 
            if (digit == 0 || i % digit != 0) { 
               x= false; 
                break; 
            }
            num /= 10; 
        }
        if (x) {
            arr.push_back(i); 
        }
        }
        return arr;
    }
};
