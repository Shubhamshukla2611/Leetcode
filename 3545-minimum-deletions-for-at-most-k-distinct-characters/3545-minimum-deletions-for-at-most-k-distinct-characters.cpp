class Solution {
public:
    int minDeletion(string s, int k) {
        int n = s.size();
        int low = 0;
        int high = 0;
        int count = 0;

        unordered_map<char, int> f;

        while(high < n) {
            f[s[high]]++;
            high++;
        }

        vector<int> freq;

        for(auto it : f) {
            freq.push_back(it.second);
        }

        sort(freq.begin(), freq.end());

        while(freq.size() - low > k) {
            count += freq[low];
            low++;
        }

        return count;
    }
};