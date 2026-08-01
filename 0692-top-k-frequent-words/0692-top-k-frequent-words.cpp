class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        int n=words.size();

        struct cmp{
            bool operator()(pair<string,int>&a , pair<string,int>&b){
                if(a.second== b.second){
                    return a.first<b.first;
                }else{
                     return a.second>b.second;
                }
            }
        };

        priority_queue<pair<string,int> , vector<pair<string,int>>, cmp> pq;

        unordered_map<string,int> f;
        for(int i=0; i<n;i++){
            f[words[i]]++;
        }

        for(auto i: f){
            string element=i.first;
            int freq= i.second;

            pair<string,int> curr ={element, freq};

            if(pq.size()<k){
                pq.push(curr);

            }else{
                pq.push(curr);
                pq.pop();
               
            }
        }

        vector<string> res;
        while(!pq.empty()){
            res.push_back(pq.top().first);
            pq.pop();
            
        }reverse(res.begin(), res.end());

        return res;
    }
};