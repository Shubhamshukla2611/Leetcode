
class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int,int> f;

        int sum = 0;
        int count = 0;

        f[0] = 1;

        for(int i = 0; i < nums.size(); i++) {
            sum += nums[i];

            if(f.find(sum - goal) != f.end()) {
                count += f[sum - goal];
            }

            f[sum]++;
        }

        return count;
    }
};
