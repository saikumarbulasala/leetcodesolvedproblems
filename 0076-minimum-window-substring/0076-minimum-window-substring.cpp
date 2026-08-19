class Solution {
public:
    string minWindow(string s, string t) {

           int l = 0, r = 0;
           vector<int> hash(256, 0);
           int minLen = INT_MAX;
           int start = -1;
           int n = s.size();
           int m = t.size();

           for(int i = 0;i<m;i++){
            hash[t[i]]++;
           }

           int cnt = 0;
           while(r < n){
            if(hash[s[r]] > 0){
                cnt++;
            }

            hash[s[r]]--;

            while(cnt == m){
                if(r - l + 1 < minLen){
                    minLen = r - l + 1;
                    start = l;
                }
                hash[s[l]]++;

                if(hash[s[l]] > 0){
                    cnt--;
                }
                l++;
            }
            r++;
           }

           if(start == -1) return "";
           return s.substr(start, minLen);
    }
};