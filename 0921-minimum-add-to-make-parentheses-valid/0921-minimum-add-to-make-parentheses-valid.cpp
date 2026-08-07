class Solution {
public:
    int minAddToMakeValid(string s) {
        int n = s.size();
        int count = 0;
        int ans = 0;
        for(int i = 0;i<n;i++){
            if(s[i] == '(') count++;
            else if(count == 0) ans = ans + 1;
            else count--;
        }
        ans = ans + count;
        return ans;
        
    }
};