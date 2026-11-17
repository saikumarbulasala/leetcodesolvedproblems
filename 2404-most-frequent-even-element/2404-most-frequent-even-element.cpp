class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int n = nums.size();
        int mini = INT_MIN;
        int ele = -1;
        map<int , int> mpp;

        for(int i = 0;i<n;i++){
            if(nums[i] % 2 == 0){
                mpp[nums[i]]++;
            }
        }

        for(auto it: mpp){
            if(it.second > mini){
                mini = it.second;
                ele = it.first;
            }
        }
        return ele;
    }
};