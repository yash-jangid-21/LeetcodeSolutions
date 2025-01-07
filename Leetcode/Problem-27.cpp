/*
#Developed by yash jangid
#Github-Link -> https://github.com/yash-jangid-21
*/
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count = 0;
        for (int i = 0, k = nums.size() - 1; i <= k;) {
            if (nums[i] != val && nums[k] == val){
                i++;
               k--;
               count++;
            }
            else if (nums[i] == val && nums[k] == val) k--;
            else if (nums[i] == val && nums[k] != val) {
                swap(nums[i], nums[k]);
                i++;
                count++;
                k--;
            }
            else {i++;count++;}
        }
        return count;
    }
};
