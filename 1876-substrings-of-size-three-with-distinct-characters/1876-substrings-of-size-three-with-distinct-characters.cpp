class Solution {
public:
    int countGoodSubstrings(string s) {
        int low=0;
        int high=2;
        int count=0;
        int n=s.size();
        unordered_map<char,int>f;
        while(high<n){
            f.clear();
            for(int i=low;i<=high;i++){
                f[s[i]]++;

                }
                if(f.size()==3){
                    count++;
                }
                low++;
                high++;
            }
    
        return count;

        
        
    }
};