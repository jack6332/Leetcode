/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */

// @lc code=start
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0;
        if(s==" "){
            return 1;
        }
        for(int i=0;i<s.length();i++){
            bool alpha[256]={0};
            int count=0;
            for(int j=i;j<s.length();j++){
                if(alpha[s[j]]==false){
                    alpha[s[j]]=true;
                    count++;
                }
                else{
                    if(count>ans){
                        ans = count;
                    }
                    break;
                }
            }
            if(count>ans){
                ans = count;
            }
        }
        return ans;
    }
};
// @lc code=end

