class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int n = s.size();
        map<char, int> mpp;

        int len = 0;
        int left = 0;
        for(int right = 0;right< n;right++){
            mpp[s[right]]++;
            while(mpp[s[right]] > 1){
                mpp[s[left]]--;
                left++;
            }

            len = max(len, right - left + 1);
        }
        return len;
    }
};