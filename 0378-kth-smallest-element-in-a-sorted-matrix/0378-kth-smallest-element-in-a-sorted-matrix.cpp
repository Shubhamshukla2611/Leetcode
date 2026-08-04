class Solution{
    public:
    int kthSmallest(vector<vector<int>>& matrix, int k){
        int n=matrix.size();
        int m=matrix[0].size();
        priority_queue<int,vector<int>,greater<int>>pq;
        vector<int>res;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int a=matrix[i][j];
                pq.push(a);
            }
           
        }

        while(!pq.empty()){
            res.push_back(pq.top());
            pq.pop();


        }return res[k-1];


    }
};