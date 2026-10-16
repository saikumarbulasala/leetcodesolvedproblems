class Solution {
public:
    int sumOfElement(vector<int> & nums, int mid){
        int n = nums.size();
        int sum = 0;
        for(int i = 0;i<n;i++){
            sum = sum + ceil((double)(nums[i]) / (double) mid);
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {

        int n = nums.size();
        int ans = -1;

        int low = 1;
        int  high = *max_element(nums.begin(), nums.end());
        while(low <= high){
            int mid = (low + high)/2;
            int divi = sumOfElement(nums , mid);
            if(divi <= threshold){
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