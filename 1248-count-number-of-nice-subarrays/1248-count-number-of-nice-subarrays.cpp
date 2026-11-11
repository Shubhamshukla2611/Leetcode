
class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        unordered_map<int,int> f;

        int sum = 0;
        int count = 0;

        f[0] = 1;

        for(int i=0; i<nums.size(); i++) {
            if(nums[i] % 2 != 0) {
                sum++;
            }

            if(f.find(sum-k) != f.end()) {
                count += f[sum-k];
            }

            f[sum]++;
        }

        return count;
    }
};
