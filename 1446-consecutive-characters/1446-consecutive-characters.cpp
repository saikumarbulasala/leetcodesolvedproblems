class Solution {
public:
    int maxPower(string s) {

        int n = s.size();
        int l = 0, r = 0;
        int maxLen =0;
        unordered_map<int , int> mpp;
        while(r < n){
            mpp[s[r]]++;
            if(mpp.size() > 1){
                while(mpp.size() > 1){
                    mpp[s[l]]--;
                    if(mpp[s[l]] == 0){
                        mpp.erase(s[l]);
                    }
                    l++;
                }
            }
            maxLen = max(maxLen, r - l + 1);
            r++;
        }
        return maxLen;
    }
};