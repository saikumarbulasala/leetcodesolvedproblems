class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n = nums.size();
        int xor1 = 0;
        for(int i = 0;i<n;i++){
            xor1 = xor1 ^ nums[i];
        }
        if(xor1 != 0) return n;

        bool allZeros = true;
        for(int i = 0;i<n;i++){
            if(nums[i] != 0){
                allZeros = false;
                break;
            }
        }
        if(allZeros == true){
            return 0;
        }
        return  n-1;
    }
};