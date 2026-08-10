class Solution {
public:
void fun(int sum,int n, int k, int start, vector<int>& temp, vector<vector<int>>& res){
    if(sum>n){
        return;
    }


    if(sum==n && k==0){
        res.push_back(temp);
        return;
    }
    

    for(int i=start; i<=9;i++){
        if(i>n){
            break;
        }
       
        temp.push_back(i);
        fun(sum+i,n,k-1,i+1,temp,res);
        temp.pop_back();
    }


    
}
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> temp;
        vector<vector<int>> res;

        fun(0,n,k,1,temp,res);
        return res;
        
    }
};