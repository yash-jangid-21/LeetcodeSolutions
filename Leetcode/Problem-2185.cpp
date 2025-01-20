/*
#Developed by yash jangid
#Github-Link -> https://github.com/yash-jangid-21
*/
class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int count = 0;
        for(string s : words){
            if(pref[0]==s[0]){
                int j=1;
                for(; j < pref.size() && j < s.size();j++){
                    if(pref[j]!=s[j]) break;
                }
                if(j==pref.size())
                count++;
            }
        }
        return count;
    }
};
