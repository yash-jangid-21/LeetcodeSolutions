/*
#Developed by yash jangid
#Github-Link -> https://github.com/yash-jangid-21
*/
class Solution {
public:
    int numberOfChild(int n, int k) {
        int child = 0;
        bool x = true;
        while(k >0){
             if(x){
                    child++;
                    if(child == n-1){
                        x = false;
                    }
             }
             else{
                child--;
                    if(child == 0){
                        x = true;
                    }
             }
             k--;
        }
        return child;
    }
};
