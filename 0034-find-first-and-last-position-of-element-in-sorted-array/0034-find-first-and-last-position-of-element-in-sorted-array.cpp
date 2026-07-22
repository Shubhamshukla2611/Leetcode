class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        
        vector<int>ans ={-1,-1};
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]<target){
                low=mid+1;
            }
            else if(nums[mid]>target){
                high=mid-1;
            }
            else{
                if(nums[mid]==target){

                    int i=mid;
                    int j=mid;
                    while(i>=0 && nums[i]==target){
                        i--;
                    }
                    while(j<n && nums[j]==target){
                        j++;
                    }
                    ans={i+1,j-1};
                   
                    
                } return ans;
            }
        }return ans;
        
    }
};