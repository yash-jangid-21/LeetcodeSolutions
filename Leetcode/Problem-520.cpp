/*
#Developed by yash jangid
#Github-Link -> https://github.com/yash-jangid-21
*/
class Solution {
public:
    bool detectCapitalUse(string word) {
        int count = 0;
        for(char c:word){
            if(c >= 'A' && c<='Z') count++;
        }
        if(count==word.size())return true;
        if(count==1 && (word[0] >= 'A' && word[0]<='Z'))return true;
        if(count==0) return true;
        return false;
    }
};
