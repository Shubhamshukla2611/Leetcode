class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int>f;
        unordered_map<char,int>window;
        for(int i=0;i<s1.size();i++){
            f[s1[i]]++;
        }
        int j=0;
        int k=s1.size()-1;

        if(s1.size()>s2.size()){
            return false;
        }
        while(k<s2.size()){
            for(int i=j;i<=k;i++){
                window[s2[i]]++;

            }
            if(f==window){
                return true;
            }
            else{
                j++;
                k++;
                window.clear();
            }

        }
        return false;
        
    }
};