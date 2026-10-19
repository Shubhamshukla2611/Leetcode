class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        int n=nums.size();
        sort(nums.begin(), nums.end());

        for(int a=0; a<n-3;a++){
            if(a>0 && nums[a]==nums[a-1]){
                continue;
            }
            for(int b=a+1; b<n-2;b++){
                if(b>a+1 && nums[b]==nums[b-1]){
                    continue;
                }
                int j=b+1;
                int k=n-1;
               

                while(j<k){
                    long long sum=(long long )nums[a]+nums[b]+nums[j]+nums[k];
                    if(sum==target){
                        res.push_back({nums[a],nums[b],nums[j],nums[k]});
                        j++;
                        k--;
                        while(j<k && nums[j]==nums[j-1]){
                            j++;
                        }
                        while(j<k && nums[k] == nums[k+1]){
                            k--;
                        }
                    }
                  
                    else if(sum>target){
                        k--;
                    }
                    else{
                        j++;
                    }
                }
            }
        }
        return res;
    }
};