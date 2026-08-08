class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {

        int n = nums.size();
        map<int,int> mpp;
        for(int i = 0;i<n;i++){
            mpp[nums[i]]++;
        }
        vector<int> ans;
        for(auto it : mpp){
            if(it.second == 1){
                if(mpp.find(it.first - 1) == mpp.end() && mpp.find(it.first + 1) == mpp.end() ){
                    ans.push_back(it.first);
                }
            }
        }
        return ans;
    }
};