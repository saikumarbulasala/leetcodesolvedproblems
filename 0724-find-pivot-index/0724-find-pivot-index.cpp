class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        vector<int> leftSumArr(n, 0);
        vector<int> rightSumArr(n, 0);

        int leftSum = 0;
        int rightSum = 0;

        for(int i = 1;i<n;i++){
            leftSum += nums[i-1];
            leftSumArr[i] = leftSum;
        }
        for(int i = n-2;i>=0;i--){
            rightSum += nums[i+1];
            rightSumArr[i] = rightSum;
        }

        for(int i = 0;i<n;i++){
            if(leftSumArr[i] == rightSumArr[i]) return i;
        }
        return -1;

    }
};