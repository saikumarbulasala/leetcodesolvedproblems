class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        int score;
        vector<int> suffixMin(n);
        int maxi = -1;
        int mini = INT_MAX;
        for(int i = n-1;i>=0;i--){
            mini = min(mini, nums[i]);
            suffixMin[i] = mini;
        }
        for(int i = 0;i<n;i++){
            maxi = max(maxi, nums[i]);
            score = maxi - suffixMin[i];
            if(score <= k) return i;
        }
        
        return -1;

    }

};