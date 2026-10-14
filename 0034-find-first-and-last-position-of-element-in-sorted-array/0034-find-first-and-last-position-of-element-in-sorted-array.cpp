class Solution {
public:
    int lowerBound(vector<int>& nums, int target){
        int n = nums.size();
        int low = 0;
        int high = n-1;
        int lb = n;
        while(low <= high){
            int mid = (low + high)/2;
            if(nums[mid] >= target){
                lb = mid;
                high = mid-1;
            }
            else{
                low = mid + 1;
            }
        }
        return lb;
    }

    int upperBound(vector<int>& nums, int target){
        int n = nums.size();
        int low = 0;
        int high = n-1;
        int up = n;
        while(low <= high){
            int mid = (low + high)/2;
            while(low <= high){
                int mid = (low + high)/2;
                if(nums[mid] > target){
                    up = mid;
                    high  = mid -1;
                }
                else{
                    low = mid + 1;
                }
            }
        }
        return up;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int lower = lowerBound(nums , target);
        if(lower == nums.size() || nums[lower] != target){
            ans.push_back(-1);
            ans.push_back(-1);
            return ans;
        } 
        int upper = upperBound(nums, target);
        ans.push_back(lower);
        ans.push_back(upper-1);
        return ans;
    }
};