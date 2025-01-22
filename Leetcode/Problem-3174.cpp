/*
#Developed by yash jangid
#Github-Link -> https://github.com/yash-jangid-21
*/
class Solution {
public:
    string clearDigits(string s) {
        string str;
        for(char c:s){
            if(c >= '0' && c <= '9'){
                str.pop_back();
            }
            else {str += c;}
        }
        return str;
    }
};
