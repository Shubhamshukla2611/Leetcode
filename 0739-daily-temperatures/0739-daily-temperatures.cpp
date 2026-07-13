class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();


        vector<int> res(n);
        stack<int> stk;
        res[n-1]=0;
        stk.push(n-1);

        for(int i= n-2; i>=0; i--){
            while(!stk.empty() && temperatures[stk.top()]<=temperatures[i]){
                stk.pop();
            } 
            if(stk.empty()){
                res[i]=0;
            }else{
                res[i]=stk.top()-i;
            }stk.push(i);



        }return res;
        
    }
};