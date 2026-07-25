class Solution {
public:
long long fun(vector<int>&piles,int k){
    
            long long time=0;
            int n=piles.size();
            for(int i=0;i<n;i++){
                time=time+piles[i]/k;
                if(piles[i]%k!=0){
                    time++;
                }
                
            }return time;
        }

    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        
        int low=1;
        sort(piles.begin(),piles.end());
        int high=piles[n-1];
        long long res=-1;
        while(low<=high){
            int mid=(low+high)/2;
            long long hours=fun(piles,mid);
            if(hours>h){
                low=mid+1;
            }else{
                res=mid;
                high=mid-1;
            }
        }return res;
        
    }
};