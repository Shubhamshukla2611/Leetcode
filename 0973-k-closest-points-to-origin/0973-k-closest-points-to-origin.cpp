class Solution {

public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {

        int n=points.size();
        priority_queue<pair<int,vector<int>>> pq;
        for(int i=0; i<n;i++){
            int x= points[i][0];
            int y= points[i][1];

            int dist=x*x + y*y;

            if(pq.size()<k){
                pq.push({dist,points[i]});
            }else{
                pq.push({dist,points[i]});
                pq.pop();
            }
        }

        vector<vector<int>> res;

        while(!pq.empty()){
            res.push_back(pq.top().second);
            pq.pop();
        }
        return res;


    

        
    }
};