/*
#Developed by yash jangid
#Github-Link -> https://github.com/yash-jangid-21
*/
class Solution {
public:
    string removeTrailingZeros(string num) {
        for(int i=num.size()-1;i>=0;i--){
            if(num[i]=='0') num.pop_back();
            else break;
        }
          return num;
    }
};
