class Solution {
public:

    void fun(vector<int>& candidates, int n, int idx,
             int sum, vector<int>& temp,
             vector<vector<int>>& res, int target) {

        if(sum == target){
            res.push_back(temp);
            return;
        }

        if(idx == n || sum > target){
            return;
        }

        for(int i = idx; i < n; i++){

            if(i > idx && candidates[i] == candidates[i-1]){
                continue;
            }

            if(sum + candidates[i] > target){
                break;
            }

            temp.push_back(candidates[i]);

            fun(candidates, n, i + 1,
                sum + candidates[i],
                temp, res, target);

            temp.pop_back();
        }return;
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {

        vector<int> temp;
        vector<vector<int>> res;

        sort(candidates.begin(), candidates.end());

        fun(candidates, candidates.size(), 0,
            0, temp, res, target);

        return res;
    }
};