class Solution {
public:
    string removeDuplicates(string s, int k) {

        int n= s.size();
        stack<pair<char,int>> stk;
        string res="";

        for(int i=0;i<n;i++){
            char c=s[i];
            
            if(stk.empty()){
                stk.push({c,1});
                continue;
            }
            if(stk.top().first!= c){
                stk.push({c,1});
                continue;
            }
            if(stk.top().second<(k-1)){
                stk.top().second++;
                continue;
            
            }
            stk.pop();

        
        }while(!stk.empty()){
            pair<char,int>p=stk.top();
            stk.pop();

            while(p.second--){
                res.push_back(  p.first);
            }
        }reverse(res.begin(), res.end());
        return res;
        
    }
};