class Solution {
public:
    int func(vector<int>& nums, int k){
        int l = 0, r = 0, sum = 0, cnt= 0;
        int n = nums.size();

        while(r < n){
            sum += nums[r];

            while(sum > k){
                sum -= nums[l];
                l++;
            }

            cnt += (r - l + 1);
            r++;
        }
        return cnt;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        vector<int> num1;
        for(int i = 0;i<nums.size();i++){
            if(nums[i] % 2 == 0) num1.push_back(0);
            else num1.push_back(1);
        }
        return func(num1, k) - func(num1, k - 1);

    }
};