class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {

        int n=nums.size();
        sort(nums.begin(), nums.end());

        int closestsum=nums[0]+nums[1]+nums[2];
        int j,k;

        for(int i=0;i<n-2;i++){
            j=i+1;
            k=n-1;

            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];

                if(abs(target-sum)<abs(target-closestsum)){
                    closestsum=sum;
                }
                else if(sum<target){
                    j++;
                }
                else if(sum>target){
                    k--;
                }
                else{
                    return sum;
                }

            }




        }return closestsum;



        
    }
};