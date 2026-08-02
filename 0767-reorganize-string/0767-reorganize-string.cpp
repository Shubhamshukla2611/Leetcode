class Solution {
public:
    string reorganizeString(string s) {

        int n = s.size();
        string res = "";

        unordered_map<char,int> f;

        for(int i=0;i<n;i++){
            f[s[i]]++;
        }

        priority_queue<pair<int,char>> pq;

        for(auto i:f){

            char character=i.first;
            int freq=i.second;

            pq.push({freq,character});
        }

        while(pq.size()>1){

            auto a=pq.top();
            pq.pop();

            auto b=pq.top();
            pq.pop();

            res.push_back(a.second);
            res.push_back(b.second);

            a.first--;
            b.first--;

            if(a.first>0){
                pq.push(a);
            }

            if(b.first>0){
                pq.push(b);
            }
        }

        if(!pq.empty()){

            if(pq.top().first>1)
                return "";

            res.push_back(pq.top().second);
        }

        return res;
    }
};