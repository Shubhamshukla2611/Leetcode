class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {

        int low=0;
        int high=0;
        int n=nums.size();

        int zeros=0;
        int maxwindow=0;

        while(high<n){
            if(nums[high]==0){
                zeros++;
            }
            while (zeros>k){
                if(nums[low]==0){
                    zeros--;
                }low++;
            }
            maxwindow=max(maxwindow, high-low+1);
            high++;

        }
        return maxwindow;  
    }
};