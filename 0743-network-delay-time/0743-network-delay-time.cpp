class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<vector<pair<int,int>>>a(n);
        for(int i=0;i<times.size();i++){
            int src=times[i][0];
            int dest=times[i][1];
            int weight=times[i][2];

            a[src-1].push_back({dest-1,weight});

        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        vector<int>res(n,INT_MAX);
        vector<int>visited(n,0);

        res[k-1]=0;
        pq.push({0,k-1});

        while(!pq.empty()){
            pair<int,int>p=pq.top();
            pq.pop();
            int dist=p.first;
            int node=p.second;

            if(visited[node]==1){
                continue;
            }else{
                visited[node]=1;
            }

            for(int j=0; j<a[node].size();j++){
                int neigh=a[node][j].first;
                int w=a[node][j].second;
                if(res[neigh]>w+dist){
                    res[neigh]=w+dist;
                    pq.push({w+dist,neigh});


                }
            }
    
        }int result=0;
        for(int i=0; i<n;i++){
            if(res[i]==INT_MAX){
                return -1;
            }else{
               result=max(result,res[i]);
            }
            
        }
        return result;
    }
};