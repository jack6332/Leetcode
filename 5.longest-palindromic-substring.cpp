/*
 * @lc app=leetcode id=5 lang=cpp
 *
 * [5] Longest Palindromic Substring
 */
// @lc code=start
class Solution {
public:
    string longestPalindrome(string s) {
        string ans="";
        for(int i=0;i<s.size();i++){
            int start =i-1,end = i+1;
            string temp="";
            temp = temp+s[i];
            while (start>-1&&end<s.size())
            {
                if(s[start]==s[end]){
                    temp=s[start]+temp+s[end];
                    start--;
                    end++;
                }
                else{
                    break;
                }
            }
            if(temp.size()>ans.size()){
                ans = temp;
            }
            int start1=i,end1=i+1;
            string temp1="";
            while (start1>-1&&end1<s.size())
            {
                if(s[start1]==s[end1]){
                    temp1=s[start1]+temp1+s[end1];
                    start1--;
                    end1++;
                }
                else{
                    break;
                }
            }
            if(temp1.size()>ans.size()){
                ans = temp1;
            }
        }
        return ans;
    }
};
// @lc code=end

