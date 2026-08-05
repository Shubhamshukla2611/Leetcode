class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {

        int n=stations.size();
        int res=0;
        int i=0;

        priority_queue<int>pq;
        int fuel=startFuel;
        int stops=0;

        while(fuel<target){


            while(i<n && fuel>=stations[i][0] ){
                pq.push(stations[i][1]);
                i++;
            }

            if(pq.empty()){
                return -1;
            }

            fuel=fuel+pq.top();
            pq.pop();
            stops++;

        }return stops;



      
        
    }
};