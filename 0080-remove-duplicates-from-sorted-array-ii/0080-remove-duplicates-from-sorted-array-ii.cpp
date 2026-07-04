
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
         int n = nums.size();
        if (n <= 2) return n;


      int i=1;
      int j=2;
      int k=2;

     

      while(j<n){
        if(nums[j]==nums[i-1]){
            j++;
            continue;
        }else{
            if(nums[j]!=nums[i-1]){
                nums[i+1]=nums[j];
                i++;
                j++;
                k++;
            }
        }

      }return k;
    }
};

      