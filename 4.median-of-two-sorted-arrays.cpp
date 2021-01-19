/*
 * @lc app=leetcode id=4 lang=cpp
 *
 * [4] Median of Two Sorted Arrays
 */

// @lc code=start
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
         vector<float>nums3;
         int a1=0,a2=0;
         int mid = (nums1.size()+nums2.size())/2;
        while (nums3.size()<mid+1)
        {
            if(a1<nums1.size()){
                if(a2<nums2.size()){
                    if(nums1[a1]<=nums2[a2]){
                        nums3.push_back(nums1[a1]);
                        a1++;
                    }
                }
                else{
                    nums3.push_back(nums1[a1]);
                    a1++;
                }
                if(nums3.size()==mid+1)
                break;
            }
            if(a2<nums2.size()){
                if(a1<nums1.size()){
                    if(nums1[a1]>nums2[a2]){
                        nums3.push_back(nums2[a2]);
                        a2++;
                    }
                }
                else{
                    nums3.push_back(nums2[a2]);
                    a2++;
                }
                if(nums3.size()==mid+1)
                break;
            }
        }
        if((nums1.size()+nums2.size())%2==1){
            return nums3[nums3.size()-1];
        }
        else{
            return (nums3[nums3.size()-1]+nums3[nums3.size()-2])/2;
        }
    }
};
// @lc code=end

