class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        int n = nums.size();

        map<int,int> mpp;

        // Count frequency
        for(int i = 0; i < n; i++){
            mpp[nums[i]]++;
        }

        // Store {frequency, element}
        vector<pair<int,int>> temp;

        for(auto it : mpp){
            temp.push_back({it.second, it.first});
        }

        // Sort by frequency in descending order
        sort(temp.begin(), temp.end(), greater<pair<int,int>>());

        // Take first k elements
        for(int i = 0; i < k; i++){
            ans.push_back(temp[i].second);
        }

        return ans;
    }
};