class Solution {
public: 
    int sumofd(vector<int> &nums , int mid){
        int n = nums.size();
        int sum = 0;

        for(int i=0;i<n;i++){
            sum = sum + ceil((double)nums[i]/(double)mid);
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        long long low = 1;
        int ans = -1;
        long long high = *max_element(nums.begin() , nums.end());
        while(low <= high){
            long long mid = (low + high)/2;
            if(sumofd(nums, mid) <= threshold){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }
};