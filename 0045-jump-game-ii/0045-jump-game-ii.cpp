class Solution {
public:
    int jump(vector<int>& nums) {

        int reach = 0;
        int nextReach = 0;
        int jumps = 0;

        for(int i = 0; i < nums.size()-1; i++) {

            nextReach = max(nextReach, i + nums[i]);

            if(i == reach) {
                jumps++;
                reach = nextReach;
            }
        }

        return jumps;
    }
};