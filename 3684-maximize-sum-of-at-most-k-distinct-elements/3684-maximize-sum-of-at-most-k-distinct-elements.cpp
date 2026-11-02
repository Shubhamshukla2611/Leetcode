class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        vector<int> ans;
        sort(nums.begin(), nums.end());
        reverse(nums.begin(), nums.end());

        while(ans.size()<k){
            for(int i=0; i<nums.size();i++){
                if(i==0 || nums[i]!=nums[i-1]){
                    ans.push_back(nums[i]);
                }
                if(ans.size()==k){
                    break;
                }
                
            }
            break;
            

        }
        return ans;


        
    }
};