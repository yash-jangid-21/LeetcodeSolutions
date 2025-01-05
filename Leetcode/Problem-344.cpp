/*
#Developed by yash jangid
#Github-Link -> https://github.com/yash-jangid-21
*/
class Solution {
public:
    void reverseString(vector<char>& s) {
        int len = 0;
        for(char c:s){len++;}
        for(int i =0,k=len-1;i<len/2;i++,k--){
              swap(s[i],s[k]);
        }
    }
};
