/*
#Developed by yash jangid
#Github-Link -> https://github.com/yash-jangid-21
*/
class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int num = x,count = 0;
        while(x>0){
            count += (x%10);
            x /= 10;
        }
        if(num % count == 0) return count;
        return -1;
    }
};
