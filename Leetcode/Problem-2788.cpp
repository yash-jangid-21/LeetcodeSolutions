/*
#Developed by yash jangid
#Github-Link -> https://github.com/yash-jangid-21
*/
class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
         vector<string> a;
        for(string s:words){
            string x = "";
            for(char c :s){
                if(c==separator){
                    if(x!=""){
                        a.push_back(x);
                        x = "";
                    }
                }
                else{
                  x+=c;
                }
            }
            if(x!=""){
                        a.push_back(x);
                        x = "";
                    }
        }
        return a;
    }
};
