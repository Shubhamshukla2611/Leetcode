class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int n=nums.size();
        int res=0;
        int startvalue=1;

        while(true){
            int sum=startvalue;
            int i;

            for(i=0;i<n;i++){
                sum+=nums[i];

                if(sum<1){
                    startvalue++;
                    break;
                }
            }

            if(i==n){
                res=startvalue;
                break;
            }
        }

        return res;
    }
};