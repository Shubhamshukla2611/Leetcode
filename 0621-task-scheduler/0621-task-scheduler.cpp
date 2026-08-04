class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {

        unordered_map<char,int> freq;
        int m=tasks.size();

        for(int i=0; i<m;i++){
            freq[tasks[i]]++;
        }

        int maxfreq=0;
        for(auto i: freq){
            maxfreq=max(maxfreq,i.second);

        }
        int maxcount=0;

        for(auto i : freq){
            if(i.second==maxfreq){
                maxcount++;
            }
        }

        int ans=(maxfreq-1)*(n+1)+maxcount;
        

        return max(m, ans);



    }
};