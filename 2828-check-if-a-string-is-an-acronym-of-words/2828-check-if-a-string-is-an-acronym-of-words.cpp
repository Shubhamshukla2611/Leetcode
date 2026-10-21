class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        int m=words.size();
        string st;

        for(int i=0;i<m;i++){
            st+=words[i][0];
        }
        if(st==s){
            return true;
        }
        return false;
        
    }
};