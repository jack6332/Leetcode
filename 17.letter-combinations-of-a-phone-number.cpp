/*
 * @lc app=leetcode id=17 lang=cpp
 *
 * [17] Letter Combinations of a Phone Number
 */

// @lc code=start
class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        if(digits.size()==0){
            return ans;
        }
        if(digits[0]<='6'){
            char a=('a'+((digits[0]-'0')-2)*3);
            char b=('a'+((digits[0]-'0')-2)*3+1);
            char c=('a'+((digits[0]-'0')-2)*3+2);
            string aa="";
            aa+=a;
            string bb="";
            bb+=b;
            string cc="";
            cc+=c;
            ans.push_back(aa);
            ans.push_back(bb);
            ans.push_back(cc);
        }
        else if(digits[0]=='7'){
            ans.push_back("p");
            ans.push_back("q");
            ans.push_back("r");
            ans.push_back("s");
        }
        else if(digits[0]=='8'){
            ans.push_back("t");
            ans.push_back("u");
            ans.push_back("v");
        }
        else if(digits[0]=='9'){
            ans.push_back("w");
            ans.push_back("x");
            ans.push_back("y");
            ans.push_back("z");
        }
        for(int i=1;i<digits.size();i++){
            char a=('a'+((digits[i]-'0')-2)*3);
            char b=('a'+((digits[i]-'0')-2)*3+1);
            char c=('a'+((digits[i]-'0')-2)*3+2);
            if(digits[i]<='6'){
                for(int j=0;j<ans.size();j++){
                    if(ans[j].size()==i){
                        ans.push_back(ans[j]+a);
                        ans.push_back(ans[j]+b);
                        ans.push_back(ans[j]+c);
                        ans.erase(ans.begin()+j);
                        j--;
                    }
                    else{
                        break;
                    }
                }
            }  
            else if(digits[i]=='7'){
                for(int j=0;j<ans.size();j++){
                    if(ans[j].size()==i){
                        ans.push_back(ans[j]+'p');
                        ans.push_back(ans[j]+'q');
                        ans.push_back(ans[j]+'r');
                        ans.push_back(ans[j]+'s');
                        ans.erase(ans.begin()+j);
                        j--;
                    }
                    else{
                        break;
                    }
                }
            }
            else if(digits[i]=='8'){
                for(int j=0;j<ans.size();j++){
                    if(ans[j].size()==i){
                        ans.push_back(ans[j]+'t');
                        ans.push_back(ans[j]+'u');
                        ans.push_back(ans[j]+'v');
                        ans.erase(ans.begin()+j);
                        j--;
                    }
                    else{
                        break;
                    }
                }
            }
            else if(digits[i]=='9'){
                for(int j=0;j<ans.size();j++){
                    if(ans[j].size()==i){
                        ans.push_back(ans[j]+'w');
                        ans.push_back(ans[j]+'x');
                        ans.push_back(ans[j]+'y');
                        ans.push_back(ans[j]+'z');
                        ans.erase(ans.begin()+j);
                        j--;
                    }
                    else{
                        break;
                    }
                }
            }
        }
        return ans;
    }
};
// @lc code=end

