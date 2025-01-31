/*
#Developed by yash jangid
#Github-Link -> https://github.com/yash-jangid-21
*/
class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) { 
        vector<string> result;
        string str;
        for(int i = 0;i<text.size();i++){
             if(text[i]==' '){
                if(str == first){
                    string x;
                    int j = i+1;
                   for(;text[j]!=' ' && j<text.size();j++){
                        x+= text[j];
                   }
                   if(x == second){
                    x = "";
                    for(int k = j+1;k<text.size() && text[k]!=' ';k++){
                       x+= text[k];
                   }
                   if(x!=""){
                   result.push_back(x);
                   }
                   }
                }
                str = "";
             }
             else str += text[i];
        }
        return result;
    }
};
