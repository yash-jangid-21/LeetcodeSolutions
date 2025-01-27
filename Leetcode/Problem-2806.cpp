/*
#Developed by yash jangid
#Github-Link -> https://github.com/yash-jangid-21
*/
class Solution {
public:
    int accountBalanceAfterPurchase(int purchaseAmount) {
        if(purchaseAmount %  10 ==0){
            return (100 - purchaseAmount);
        }
        else{
            if(purchaseAmount % 10 < 5){
                while(purchaseAmount %  10 !=0){
                purchaseAmount--;
            }
            return (100 - purchaseAmount);
            }
            while(purchaseAmount %  10 !=0){
                purchaseAmount++;
            }
            return (100 - purchaseAmount);

        }
    }
};
