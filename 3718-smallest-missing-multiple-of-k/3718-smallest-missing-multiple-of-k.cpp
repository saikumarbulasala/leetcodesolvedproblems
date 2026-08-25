class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {

        int n = nums.size();
        map<int, int>mpp;
        for(int i = 0;i<n;i++){
            mpp[nums[i]]++;
        }
        for(int i = 1;i<=100;i++){
            if(mpp.find(i * k) == mpp.end()){
                return i*k;
            }
        }
        return 101;
    }
};