/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(i==j){
                    continue;
                }
                else{
                    if(nums[i]+nums[j]==target){
                        ans.push_back(i);
                        ans.push_back(j);
                        i=nums.size()-1;
                        break;
                    }
                }
            }
        }
        return ans;
    }
};
// @lc code=end

