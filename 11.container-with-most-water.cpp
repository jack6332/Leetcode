/*
 * @lc app=leetcode id=11 lang=cpp
 *
 * [11] Container With Most Water
 */

// @lc code=start
class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans=0;
        int left=0,right=height.size()-1;
        while (right>left)
        {
            int temp=0;
            if(height[right]>=height[left]){
                temp = height[left]*(right-left);
                left++;
            }
            else{
                temp = height[right]*(right-left);
                right--;
            }
            if(temp>ans){
                ans = temp;
            }
        }
        return ans;
    }
};
// @lc code=end

