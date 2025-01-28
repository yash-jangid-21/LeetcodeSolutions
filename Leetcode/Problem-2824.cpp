/*
#Developed by yash jangid
#Github-Link -> https://github.com/yash-jangid-21
*/
class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int count = 0;
        for(int i = 0;i<nums.size();i++){
            for(int j = i;j<nums.size();j++){
             if((nums[i]+nums[j] < target) && i < j ) count++;
            }
        }
        return  count;
    }
};
