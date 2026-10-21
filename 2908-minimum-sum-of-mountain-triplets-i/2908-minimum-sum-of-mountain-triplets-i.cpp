class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int n=nums.size();
        int res=INT_MAX;

        for(int i=0;i<n-2;i++){
            for(int j=i+1;j<n-1;j++){
                for(int k=j+1;k<n;k++){
                    if(nums[i]<nums[j] && nums[k]<nums[j]){
                        int sum=nums[i]+nums[j]+nums[k];
                        res=min(res,sum);
                    }
                }
            }
        }

        return res==INT_MAX ? -1 : res;
    }
};