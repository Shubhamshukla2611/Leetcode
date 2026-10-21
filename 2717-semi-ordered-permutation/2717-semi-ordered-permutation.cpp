class Solution {
public:
    int semiOrderedPermutation(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        int i=0;
        int j=n-1;
        while(nums[i]!=1){
            i++;
        }
        while(nums[j]!=n){
            j--;
        }
        count=i+(n-1-j);

        if(i>j){
            count--;
        }

        return count;
       
    
        
    }
};