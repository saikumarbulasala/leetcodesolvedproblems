class Solution {
public:
    string frequencySort(string s) {
        vector<pair<int , char>> ansarr(123, {0,0});
        for(auto ch : s){
            ansarr[ch] = {ansarr[ch].first + 1, ch};
        }
        string ans = "";
        sort(ansarr.begin(), ansarr.end(), greater<pair<int, char>>());
        for(int i = 0;i<123;i++){
            ans.append(ansarr[i].first , ansarr[i].second);
        }
        return ans;

    }
};