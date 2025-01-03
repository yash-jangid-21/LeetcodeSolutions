/*
#Developed by yash jangid
#Github-Link -> https://github.com/yash-jangid-21
*/
class Solution {
public:
    bool isValid(string s) {
        int top =-1;
        if(s.length()==1) return false;
        char a[s.length()];
        for(char c:s ){
            if(c=='(') a[++top] = c;
            else if(c=='[') a[++top] = c;
            else if(c=='{') a[++top] = c;
            else if (top==-1) return false;
            else if(c==')'){ if ( a[top]!='(')  return false; top--;}
            else if(c==']'){  if (a[top]!='[')return false; top--;} 
            else if(c=='}') { if (a[top]!='{') return false; top--;}
        }
        if(top==-1)
        return true;
        return false;
    }
};