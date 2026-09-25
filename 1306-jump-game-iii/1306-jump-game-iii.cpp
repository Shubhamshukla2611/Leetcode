class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        int n=arr.size();
        vector<int> visited(n,0);
        queue<int>q;
        q.push(start);
        visited[start]=1;

        while(!q.empty()){
            int i=q.front();
            q.pop();
            if(arr[i]==0){
                return true;
            }
            int x=i+arr[i];
            int y=i-arr[i];
            if(x<n && visited[x]==0){
                q.push(x);
                visited[x]=1;
    
            }
            if(y>=0 && visited[y]==0){
                q.push(y);
                visited[y]=1;
                

            }
        }
        return false;
        
    }
};