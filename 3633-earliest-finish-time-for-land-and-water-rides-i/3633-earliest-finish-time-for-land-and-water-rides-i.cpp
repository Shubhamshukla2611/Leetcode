class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, 
                           vector<int>& waterStartTime, vector<int>& waterDuration) {
        int n = landStartTime.size();
        int m = waterStartTime.size();
        int res = INT_MAX;

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                int landEnd = landStartTime[i] + landDuration[i];
                int waterEnd = max(landEnd, waterStartTime[j]) + waterDuration[j];
                res = min(res, waterEnd);

                int waterFinish = waterStartTime[j] + waterDuration[j];
                int landEnd2 = max(waterFinish, landStartTime[i]) + landDuration[i];
                res = min(res, landEnd2);
            }
        }

        return res;
    }
};