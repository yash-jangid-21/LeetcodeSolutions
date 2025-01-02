/*
#Developed by yash jangid
#Github-Link -> https://github.com/yash-jangid-21
*/
class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        for(int i=s.size()-1;i>=0;i--){
             if(s[i]!=' ') count++;
             if(count>=1 && s[i]==' ') break;
        }
        return count;
    }
};