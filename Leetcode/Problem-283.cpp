/*
#Developed by yash jangid
#Github-Link -> https://github.com/yash-jangid-21
*/
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if (nums.size() == 1)
            return;
        for (int i = 0, k = 1; k < nums.size();) {
            if (nums[i] == 0 && nums[k] == 0) {
                k++;
            } else if (nums[i] == 0 && nums[k] != 0) {
                swap(nums[i], nums[k]);
                i++;
                k++;
            }
              else  {
                i++;
                k++;
        }
        }
    }
};
