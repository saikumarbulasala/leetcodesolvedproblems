class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        int cnt = 0;
        for(int i = n-1;i>=0;i--){
            cnt++;
            if(cnt == k) return nums[i];
        }
        return -1;

    }
};