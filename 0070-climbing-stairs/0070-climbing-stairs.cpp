class Solution {
public:
unordered_map<int,int>dp;
int fun(int i, int n){
    if(i==n){
        return 1;
    }
    if(i>n){
        return 0;
    }
    if(dp.find(i)!=dp.end()){
        return dp[i];
    }
    int f1=fun(i+1,n);
    int f2=fun(i+2,n);
    int ans=f1+f2;
    dp[i]=ans;
    return ans;
}
    int climbStairs(int n) {
        return fun(0,n);
        
        
    }
};