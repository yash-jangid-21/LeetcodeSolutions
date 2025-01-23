/*
#Developed by yash jangid
#Github-Link -> https://github.com/yash-jangid-21
*/
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0) return "";
        if(strs.size()==1) return strs[0];
        if(strs[0]=="") return strs[0];
        string prefix;
        string s = strs[0];
        int i = 0;
        while(true){
           int j = 0;
           int count = 0;
           for(;j<strs.size();j++){
                if(s[i]==strs[j][i]) count++;
           }
           if(j==count && prefix.size()<s.size()) prefix.push_back(s[i]);
           else return prefix;
           i++;
        }
    }
};
