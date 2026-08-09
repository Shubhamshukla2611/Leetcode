class Solution {
public:

void fun(vector<int>& candidates, int n, int idx, vector<int>& temp,int sum, vector<vector<int>>& res,int target){


    if(idx==n){

        return;
    }
    if(sum==target){
        res.push_back(temp);
        return;
    }

    

        // nhi lenge 

        fun(candidates,n,idx+1, temp,sum,res,target);

        // lenge 
        if(candidates[idx]+sum<=target){
            temp.push_back(candidates[idx]);
            sum+=candidates[idx];
            fun(candidates,n,idx,temp,sum,res,target);
            temp.pop_back();
        }return;

  


}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

        vector<int> temp;
        vector<vector<int>> res;

        fun(candidates,candidates.size(),0,temp,0,res,target);
        return res;
        
    }
};