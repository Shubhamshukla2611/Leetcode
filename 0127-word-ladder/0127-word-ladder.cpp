class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {

        string& begin=beginWord;
        string& end=endWord;
        vector<string>& word=wordList;

        int n= word.size();

        unordered_map<string,int>f;
        for(int i=0;i<word.size();i++){
            f[word[i]]=1;
        }
        if(f.find(begin)==f.end()){
            f[begin]=1;
        }
        if(f.find(end)==f.end()){
            return 0;

        }

        queue<pair<string,int>>q;
        q.push({begin,1});
        f.erase(begin);

        while(!q.empty()){
            pair<string,int>p=q.front();
            q.pop();
            string s=p.first;
            int val=p.second;

            if(end==s){
                return val;
            }
            
            for(int i=0;i<s.size();i++){
                char ch=s[i];
                for(int j=97;j<=122;j++){
                    if(ch==j){
                        continue;
                    }
                    s[i]=j;

                    if(f.find(s)!=f.end()){
                        q.push({s,val+1});
                        f.erase(s);
                    }
                }
                s[i]=ch;
            }
        }return 0;
        
        
    }
};