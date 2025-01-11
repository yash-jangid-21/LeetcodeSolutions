/*
#Developed by yash jangid
#Github-Link -> https://github.com/yash-jangid-21
*/
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        for(char c: letters){
            if(target < c) return c;
        }
        return letters[0];
    }
};
