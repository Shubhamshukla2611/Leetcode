class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        
        int n=mat.size(); //rows

        priority_queue<pair<int,int>> pq;

        for(int i=0; i<n;i++){
            int count=0;

            for(int j=0; j<mat[0].size();j++){
                if(mat[i][j]==1){
                    count++;
                }
            }
            pair<int,int> curr={count,i};

            if(pq.size()<k){
                pq.push(curr);
            }else{
                if(curr.first<pq.top().first){
                    pq.pop();
                    pq.push(curr);
                }
            }


        }

        vector<int> res;
        while(!pq.empty()){
            res.push_back(pq.top().second);
            pq.pop();
        }reverse(res.begin(), res.end());
        return res;

       

    }
};