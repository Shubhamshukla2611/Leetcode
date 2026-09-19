class Solution {
public:
int fun(vector<int>& nums,int i, int n, int sum,vector<vector<int>>& dp){
    if(sum==0){
        return true;
    }
    if(i==n){
        return false;
    }
    if(dp[i][sum]!=-1){
        return dp[i][sum];
    }
    if(nums[i]>sum){
        return dp[i][sum]=fun(nums,i+1,n,sum,dp);
    }
    int yes=fun(nums,i+1,n,sum-nums[i],dp);
    int no=fun(nums,i+1,n,sum,dp);

    return dp[i][sum]=yes || no;




}
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int totalsum=0;
        
        for(int i=0; i<n;i++){
            totalsum+=nums[i];
        }
        if(totalsum%2!=0){
            return false;
        }
      
        int sum=totalsum/2;
        vector<vector<int>>dp(n,vector<int>(sum+1,-1));
        return fun(nums,0,n,sum,dp);


    }
};