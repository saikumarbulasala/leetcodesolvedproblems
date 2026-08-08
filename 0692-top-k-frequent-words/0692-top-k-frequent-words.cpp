class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {

        int n = words.size();
        vector<string> ans;
        map<string, int> mpp;
        for(int i = 0;i<n;i++){
            mpp[words[i]]++;
        }
        vector<pair<int , string>> temp;
        for(auto it: mpp){
            temp.push_back({it.second, it.first});
        }

        sort(temp.begin(), temp.end(), [](auto &a, auto &b) {
            return a.first > b.first ||
                   (a.first == b.first && a.second < b.second);
        });

        for(int i = 0;i<k;i++){
            ans.push_back(temp[i].second);
        }
        return ans;
    }
};