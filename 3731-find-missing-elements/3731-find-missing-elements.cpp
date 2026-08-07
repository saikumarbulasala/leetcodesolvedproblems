class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n = nums.size();
        int maxi = nums[0];
        vector<int> ans;
        int mini = INT_MAX;

        for(int i = 0;i<n;i++){
            maxi = max(maxi, nums[i]);
        }
        for(int i = 0;i<n;i++){
            mini = min(mini, nums[i]);
        }

        for(int i = mini;i<= maxi;i++){
            int flag = 1;
            for(int j = 0;j<n;j++){
                if(nums[j] == i) {
                    flag = 0;
                    break;
                }
            }
            if(flag == 1) ans.push_back(i);

        }
        return ans;
    }
};