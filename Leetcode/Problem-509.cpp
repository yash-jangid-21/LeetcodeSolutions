/*
#Developed by yash jangid
#Github-Link -> https://github.com/yash-jangid-21
*/
class Solution {
public:
    int fib(int n) {
        if(n==1) return 1;
        int x = 0, y = 1;
        int res = 0;
        for (int i = 1; i < n; i++) {
            res = x + y;
            x = y;
            y = res;
        }
        return res;
    }
};
