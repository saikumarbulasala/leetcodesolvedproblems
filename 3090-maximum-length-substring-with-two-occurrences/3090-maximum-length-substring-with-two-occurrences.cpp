class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n = s.size();
        int left = 0;
        int ans = -1;
        map<char, int> mpp;
        for(int right = 0;right < n;right++){
            mpp[s[right]]++;
            while(mpp[s[right]] > 2){
                mpp[s[left]]--;
                left++;
            }
            ans = max(ans, right - left + 1);
        }
        return ans;
    }
};