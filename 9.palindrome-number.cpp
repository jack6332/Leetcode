/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
        vector<char>s;
        if(x<0){
            return false;
        }
        else if(x<10&&x>-1){
            return true;
        }
        else if(x==10){
            return false;
        }
        else{
            while (x)
            {
                s.push_back('0'+x%10);
                x/=10;
            }
        }
        int start=0,end=s.size()-1;
        bool check = true;
        while(start!=end&&start-end!=1){
            if(s[start]==s[end]){
                start++;
                end--;
            }
            else{
                check = false;
                break;
            }
        }
        return check;
    }
};
// @lc code=end

