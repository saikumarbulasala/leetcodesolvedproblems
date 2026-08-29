class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int n = capacity.size();

        vector<int> req;
        for(int i = 0;i<n;i++){
            req.push_back(capacity[i] - rocks[i]);
        }
        sort(req.begin(), req.end());
        int ans = 0;

        for(int i = 0;i<n;i++){
            if(additionalRocks >= req[i]){
                additionalRocks -= req[i];
                ans++;
            }
            else break;
        }
        return ans;
        
    }
};