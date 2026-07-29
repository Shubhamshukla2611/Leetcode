class Solution {
public:

int ispossible(int minday, int m ,int k, vector<int>&bloomDay){
    int count=0;
    int total=0;
    int n=bloomDay.size();

    for(int i=0; i<n;i++){
        if(bloomDay[i]<=minday){
            count++;
        }else{
            count=0;

        }
        if (count==k){
            total++;
            count=0;

        }
        if(total==m){
            return true;
        }
    }return false;
}
    int minDays(vector<int>& bloomDay, int m, int k) {

        int n=bloomDay.size();

        int low=*min_element(bloomDay.begin(), bloomDay.end());
        int high=*max_element(bloomDay.begin(), bloomDay.end());
        int ans=-1;

        while(low<=high){

            int mid=(low+high)/2;
            if(ispossible(mid, m,k,bloomDay)){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }


        }
        return ans;

        
    }
};