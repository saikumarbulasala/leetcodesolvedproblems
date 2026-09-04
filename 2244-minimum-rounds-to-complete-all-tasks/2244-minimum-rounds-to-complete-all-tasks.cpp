class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        int n = tasks.size();
        unordered_map<int , int> mpp;
        for(int i = 0;i<n;i++){
            mpp[tasks[i]]++;
        }
        int ans = 0;
        for(auto it: mpp){
            int freq = it.second;
            if(freq == 1) return -1;
            ans += freq / 3;
            if(freq % 3 != 0){
                ans++;
            }

        }
        return ans;
    }
};