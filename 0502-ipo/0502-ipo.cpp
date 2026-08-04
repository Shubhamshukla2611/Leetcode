class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {

        int n=capital.size();
        priority_queue<pair<int,int>, vector<pair<int,int>>,greater<pair<int,int>>> pq;
        priority_queue<pair<int,int>> cq;
        int proj=0;

        for(int i=0; i<n;i++){
            pair<int,int>curr={capital[i], profits[i]};
            pq.push(curr);
           
        }

        while(proj!=k){

            while(!pq.empty() && pq.top().first<=w){
                pair<int,int>max={pq.top().second, pq.top().first};
                cq.push(max);
                pq.pop();
            }

            if(cq.empty()){
                break;

            } else {
                w=w+cq.top().first;
                cq.pop();


            }proj++;
        }return w;
        

        
    }
};