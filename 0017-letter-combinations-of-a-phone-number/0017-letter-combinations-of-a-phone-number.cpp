class Solution {
public:
 unordered_map<char, string> f = {
        {'2', "abc"},
        {'3', "def"},
        {'4', "ghi"},
        {'5', "jkl"},
        {'6', "mno"},
        {'7', "pqrs"},
        {'8', "tuv"},
        {'9', "wxyz"}
    };

void fun(string &digits , int n, int idx, string &temp, vector<string> &res){
    if(idx==n){
        res.push_back(temp);
        return;
    }
    string choice=f[digits[idx]];
    for(int j=0;j<choice.size();j++){
        temp.push_back(choice[j]);
        fun(digits,n,idx+1,temp,res);
        temp.pop_back();
    }
    return;


}
    vector<string> letterCombinations(string digits) {

        string temp="";
        vector<string>res;

        fun(digits,digits.size(),0,temp,res);
            return res;
        
        
    }
};