class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {

        unordered_map<char,int> freq;

        for(char ch : tasks){
            freq[ch]++;
        }

        priority_queue<int> pq;

        for(auto it : freq){
            pq.push(it.second);
        }

        int time = 0;

        while(!pq.empty()){

            vector<int> temp;

            int cycle = n + 1;

            while(cycle > 0 && !pq.empty()){

                int curr = pq.top();
                pq.pop();

                curr--;

                if(curr > 0){
                    temp.push_back(curr);
                }

                time++;
                cycle--;
            }

            for(int x : temp){
                pq.push(x);
            }

            if(pq.empty()){
                break;
            }

            time += cycle;
        }

        return time;
    }
};